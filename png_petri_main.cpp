#include <cstdint>
#include <cstring>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

#include "binops.hpp"
#include "utils.hpp"
#include "colors.h"

struct PhysicsObject {
	std::uint64_t a;
	std::uint32_t b;
	float x;
	float y;
	float rot_radians;
	double f;
	double g;
	double h;
	double i;
	double j;
	bool k;
	bool l;
	bool m;
	bool n;
	bool o;
	float z;
	std::uint32_t width;
	std::uint32_t height;
	std::vector<std::uint32_t> colors;
};

struct RenderObject {
	sf::Sprite sprite;
	std::unique_ptr<sf::Texture> texture;
	const PhysicsObject* physics_object;
};

const float degrees_in_radians = 57.2957795131;

struct read_vec_uint32_result {
	const char* ptr;
	std::vector<std::uint32_t> data;
};

read_vec_uint32_result read_vec_uint32(const char* ptr)
{
	auto count = read_be<std::uint32_t>(ptr);
	std::vector<std::uint32_t> result(count);

	ptr += 4;
	for (auto& out : result) {
		out = read_be<std::uint32_t>(ptr);
		ptr += 4;
	}

	return {ptr, result};
}

uint32_t GetColor(const char* color)
{
	for (int i = 0; i < numMats; i++)
	{
		//printf("comparing %s with %s\n", color, allColors[i].name);
		if (strcmp(color, allColors[i].name) == 0)
		{
			//printf("Success! Returning color #%06x for string %s\n", allColors[i].color, color);
			return allColors[i].color;
		}
	}
	return 0;
}

struct ChunkSprite
{
	int cx;
	int cy;
	sf::Texture tex;
};

ChunkSprite RenderChunk(const char* save00_path, int cx, int cy)
{
	char pathBuffer[200];
	sprintf_s(pathBuffer, "%s/world/world_%i_%i.png_petri", save00_path, cx * 512, cy * 512);
	std::ifstream fileExistenceStream(pathBuffer, std::ios::binary);
	if (fileExistenceStream.fail())
	{
		//std::cerr << "File not found: " << pathBuffer << '\n';
		return { cx, cy, sf::Texture() };
	}
	fileExistenceStream.close();

	auto file_contents = read_compressed_file(pathBuffer);
	auto data = file_contents.c_str();
	auto data_end = data + file_contents.size();

	auto version = read_be<std::uint32_t>(data);
	auto width_q = read_be<std::uint32_t>(data + 4);
	auto height_q = read_be<std::uint32_t>(data + 8);

	if (version != 24 || width_q != 512 || height_q != 512)
	{
		std::cerr << "Unexpected header:\n";
		std::cerr << "  version: " << version << '\n';
		std::cerr << "  width?: " << width_q << '\n';
		std::cerr << "  height?: " << height_q << '\n';
		return { cx, cy, sf::Texture() };
	}

	auto world_cells_start = data + 12;

	std::vector<std::uint8_t> hp_values_q(512 * 512);
	std::memcpy(hp_values_q.data(), world_cells_start, 512 * 512);

	auto material_names_start = world_cells_start + 512 * 512;
	auto material_name_count = read_be<std::uint32_t>(material_names_start);
	std::vector<std::string> material_names(material_name_count);

	auto material_names_ptr = material_names_start + 4;
	for (int i = 0; i != material_name_count; ++i)
	{
		auto size = read_be<std::uint32_t>(material_names_ptr);
		material_names[i].resize(size);
		std::memcpy((void*)material_names[i].data(), material_names_ptr + 4, size);
		material_names_ptr += 4 + size;
	}

	uint32_t* material_colors = (uint32_t*)malloc(4 * material_name_count);
	for (int i = 0; i < material_name_count; i++)
		material_colors[i] = (GetColor(material_names[i].c_str()) | 0xff000000);

	auto [physics_objects_start, custom_world_colors] =
		read_vec_uint32(material_names_ptr);

	uint32_t* RGBABuffer = (uint32_t*)malloc(4 * 512 * 512);
	auto custom_color_it = custom_world_colors.begin();
	for (int i = 0; i != 512 * 512; ++i)
	{
		auto posx = i % 512;
		auto posy = i / 512;
		auto material = hp_values_q[i] & (~0x80);
		auto custom_color = (hp_values_q[i] & 0x80) != 0;
		if (custom_color)
		{
			RGBABuffer[i] = *custom_color_it;
			++custom_color_it;
		}
		else
		{
			RGBABuffer[i] = material_colors[material];
		}
	}

	sf::Texture world_texture;
	world_texture.create(0x200, 0x200);
	world_texture.update((unsigned char*)RGBABuffer, 512, 512, 0, 0);
	free(material_colors);
	free(RGBABuffer);
	printf("finished rendering chunk at (%i, %i)\n", cx, cy);
	return { cx, cy, world_texture };
}

int main(int argc, char** argv)
{
	char save00_path[200];
	if (argc > 1)
	{
		strcpy_s(save00_path, argv[1]);
	}
	else
	{
		strcpy_s(save00_path, "%appdata%");
		size_t bufferSize = 200;
		getenv_s(&bufferSize, save00_path, "appdata");
		std::string tempStr(save00_path);
		tempStr = tempStr.substr(0, tempStr.length() - 8);
		sprintf_s(save00_path, "%s/LocalLow/Nolla_Games_Noita/save00", tempStr.c_str());
	}

	char streamInfoPath[200];
	sprintf_s(streamInfoPath, "%s/world/.stream_info", save00_path);

	std::ifstream save00ExistenceStream(streamInfoPath, std::ios::binary);
	if (save00ExistenceStream.fail())
	{
		std::cerr << "ERR: stream_info file not found at " << streamInfoPath << "! Ensure that there is a valid save present, or if not a Windows user, run the program again with WorldMapViewer <path-to-save00>\n";
		return -1;
	}
	save00ExistenceStream.close();

	sf::Vector2f initial_display_sz(950.f, 800.f);
	sf::RenderWindow window(
		sf::VideoMode(initial_display_sz.x, initial_display_sz.y),
		"World Viewer"
	);

	window.setVerticalSyncEnabled(true);

	auto handle_resize = [&](sf::Vector2f new_size) {
		sf::View view(new_size / 2.f, new_size);
		window.setView(view);
	};

	handle_resize(initial_display_sz);


	std::vector<ChunkSprite> chunks;
	for (int i = -36; i < 34; i++)
		for (int j = -14; j < 35; j++)
			chunks.push_back(RenderChunk(save00_path, i, j));
	

	sf::Vector2f viewportCenter(512, 512);
	constexpr float scrollSensitivity = 1.2f;
	float zoomLevel = 1;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::Resized) {
				handle_resize(sf::Vector2f(event.size.width, event.size.height));
			}
			
			if (event.type == sf::Event::MouseWheelMoved)
			{
				zoomLevel *= event.mouseWheel.delta == 1 ? scrollSensitivity : 1 / scrollSensitivity;
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A)) viewportCenter.x -= 10 / zoomLevel;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D)) viewportCenter.x += 10 / zoomLevel;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W)) viewportCenter.y -= 10 / zoomLevel;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S)) viewportCenter.y += 10 / zoomLevel;

		window.clear(sf::Color::Black);

		sf::Vector2f screenSize = sf::Vector2f(window.getSize());
		sf::Vector2f topLeftOffset = screenSize * 0.5f;
		for (ChunkSprite& chunk : chunks)
		{
			sf::Sprite s;
			s.setTexture(chunk.tex);
			s.setScale(zoomLevel, zoomLevel);
			s.setPosition((chunk.cx * 512 - viewportCenter.x) * zoomLevel + topLeftOffset.x, (chunk.cy * 512 - viewportCenter.y) * zoomLevel + topLeftOffset.y);
			window.draw(s);
		}

		window.display();
	}
}