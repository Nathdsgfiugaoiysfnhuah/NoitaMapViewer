#pragma once

#include <stdint.h>

struct MaterialColor
{
	const char* name;
	uint32_t color;
};

constexpr int numMats = 443;
const MaterialColor allColors[] = {
	{"acid", 0x3dff00},
{"acid_gas", 0x227933},
{"acid_gas_static", 0x227933},
{"air", 0x000000},
{"alcohol", 0x0772ea},
{"alcohol_gas", 0x094b97},
{"aluminium", 0x726c61},
{"aluminium_molten", 0x8f897e},
{"aluminium_oxide", 0xb3c3c7},
{"aluminium_oxide_molten", 0x8f897e},
{"aluminium_robot", 0x726c61},
{"aluminium_robot_molten", 0x8f897e},
{"blood", 0x000083},
{"bloodgold_box2d", 0xf9d4cf},
{"blood_cold", 0xe88367},
{"blood_cold_vapour", 0xdba262},
{"blood_fading", 0x020083},
{"blood_fading_slow", 0x000083},
{"blood_fungi", 0x834cdd},
{"blood_thick", 0xa3a5ff},
{"blood_worm", 0x31aca5},
{"bluefungi_static", 0xa85f4b},
{"bone", 0xc7d6da},
{"bone_box2d", 0xc6d6da},
{"bone_static", 0xc6d6da},
{"brass", 0x5b7fce},
{"brass_molten", 0x82c1ff},
{"brick", 0x737996},
{"burning_powder", 0xbdbcb2},
{"bush_seed", 0x445d4d},
{"cactus", 0x213641},
{"ceiling_plant_material", 0x41a579},
{"cement", 0x868686},
{"cheese_static", 0x67cdf3},
{"cloth_box2d", 0x426776},
{"cloud", 0x5b5353},
{"cloud_blood", 0x0000ef},
{"cloud_lighter", 0x6d5353},
{"cloud_radioactive", 0x14ffea},
{"cloud_slime", 0xa158ff},
{"coal", 0x272727},
{"coal_static", 0x373737},
{"cocoon_box2d", 0x1b2d73},
{"concrete_collapsed", 0x737996},
{"concrete_sand", 0x808080},
{"concrete_static", 0x808080},
{"copper", 0x646487},
{"copper_molten", 0x8cacd6},
{"corruption_static", 0x48005e},
{"creepy_liquid", 0x8b1b43},
{"creepy_liquid_emitter", 0x414954},
{"crystal", 0xdfb36b},
{"crystal_magic", 0xfdefae},
{"crystal_purple", 0xb56bdf},
{"crystal_solid", 0xdfb36b},
{"cursed_liquid", 0x4ca53c},
{"diamond", 0xf4e6ac},
{"endslime", 0x444475},
{"endslime_blood", 0x444475},
{"endslime_static", 0x444475},
{"explosion_dirt", 0x1f3136},
{"fire", 0x0098ff},
{"fire_blue", 0xffffcf},
{"flame", 0x0f0fce},
{"fungal_gas", 0x530d70},
{"fungal_shift_particle_fx", 0x7c6371},
{"fungi", 0xc171ff},
{"fungisoil", 0x1c2628},
{"fungi_creeping", 0x80f8e3},
{"fungi_creeping_secret", 0x9dc3ce},
{"fungi_green", 0x63ff8f},
{"fungus_loose", 0x5c36a6},
{"fungus_loose_green", 0x3b8567},
{"fungus_loose_trippy", 0x5c36a6},
{"fungus_powder", 0x5886bb},
{"fungus_powder_bad", 0x5886bb},
{"fuse", 0x796658},
{"fuse_bright", 0xa057ab},
{"fuse_holy", 0x47d4f0},
{"fuse_tnt", 0x554030},
{"gem_box2d", 0xffb36b},
{"gem_box2d_darksun", 0xffdbc4},
{"gem_box2d_green", 0xdffd6b},
{"gem_box2d_opal", 0xfcfb8e},
{"gem_box2d_orange", 0xfcfaa6},
{"gem_box2d_pink", 0xfdb3cf},
{"gem_box2d_red", 0xdfb3cf},
{"gem_box2d_red_float", 0xdfb3cf},
{"gem_box2d_turquoise", 0xfefd87},
{"gem_box2d_white", 0xfffcc8},
{"gem_box2d_yellow_sun", 0xecf9ea},
{"gem_box2d_yellow_sun_gravity", 0xecf9ea},
{"glass", 0xd4c27a},
{"glass_box2d", 0xdfb36b},
{"glass_brittle", 0xd3c276},
{"glass_broken", 0xd1bf75},
{"glass_broken_molten", 0xf8fdca},
{"glass_liquidcave", 0xc9af65},
{"glass_molten", 0xf8fdca},
{"glass_static", 0xd1c076},
{"glowshroom", 0xffffff},
{"glowstone", 0x82d8b9},
{"glowstone_altar", 0x72ff4a},
{"glowstone_altar_hdr", 0xf0ff9c},
{"glowstone_potion", 0x82d8b9},
{"glue", 0xe3fcf6},
{"gold", 0x77c5f7},
{"gold_b2", 0x619ecb},
{"gold_box2d", 0xf9f8cf},
{"gold_molten", 0x86dcff},
{"gold_radioactive", 0x5fd5ca},
{"gold_static", 0x6aafdc},
{"gold_static_dark", 0x375a7f},
{"gold_static_radioactive", 0x61d6cb},
{"grass", 0x41a579},
{"grass_dark", 0x3b8467},
{"grass_dry", 0x376e77},
{"grass_ice", 0x483e2e},
{"grass_loose", 0x3b8567},
{"gunpowder", 0x5471ad},
{"gunpowder_explosive", 0x4856b7},
{"gunpowder_tnt", 0x4856b7},
{"gunpowder_unstable", 0x5471ad},
{"gunpowder_unstable_big", 0x5471ad},
{"gunpowder_unstable_boss_limbs", 0x3b8467},
{"honey", 0x53c3e9},
{"ice", 0xb79652},
{"ice_acid_glass", 0xd3ba6f},
{"ice_acid_static", 0x8fd774},
{"ice_b2", 0xb3944f},
{"ice_blood_glass", 0xb3934e},
{"ice_blood_static", 0x5358ae},
{"ice_ceiling", 0xb3944f},
{"ice_cold_glass", 0xb3934e},
{"ice_cold_static", 0xdd9c8b},
{"ice_glass", 0xb3934e},
{"ice_glass_b2", 0xbb9d57},
{"ice_melting_perf_killer", 0xb3944f},
{"ice_meteor_static", 0x77ae5c},
{"ice_poison_glass", 0xd3ba6f},
{"ice_poison_static", 0xff73d7},
{"ice_radioactive_glass", 0xd3ba6f},
{"ice_radioactive_static", 0x73d77e},
{"ice_slime_glass", 0xb3934e},
{"ice_slime_static", 0xb34ea1},
{"ice_static", 0xb3934e},
{"item_box2d", 0xfdc6cf},
{"item_box2d_glass", 0xfdc6cf},
{"item_box2d_meat", 0xcd84fe},
{"juhannussima", 0x0772ea},
{"lava", 0x0081ff},
{"lavarock_static", 0x1f214f},
{"lavasand", 0x1f204d},
{"liquid_fire", 0x00c1ff},
{"liquid_fire_weak", 0x00ffff},
{"magic_crystal", 0xfde986},
{"magic_crystal_green", 0xefec9f},
{"magic_gas_hp_regeneration", 0x96fbab},
{"magic_liquid", 0xdaffff},
{"magic_liquid_berserk", 0x8b8bff},
{"magic_liquid_charm", 0x7240ff},
{"magic_liquid_faster_levitation", 0xffffff},
{"magic_liquid_faster_levitation_and_movement.png", 0x7cfff5},
{"magic_liquid_hp_regeneration", 0xbbffd9},
{"magic_liquid_hp_regeneration_unstable.png", 0xbcffd9},
{"magic_liquid_invisibility", 0xff9140},
{"magic_liquid_mana_regeneration", 0xffff0d},
{"magic_liquid_movement_faster", 0xddffff},
{"magic_liquid_polymorph", 0xffbbff},
{"magic_liquid_protection_all", 0x35ccff},
{"magic_liquid_random_polymorph", 0xbe5bc3},
{"magic_liquid_teleportation", 0xffffab},
{"magic_liquid_unstable_polymorph", 0xd572da},
{"magic_liquid_unstable_teleportation", 0xfffe4b},
{"magic_liquid_worm_attractor", 0xa19c8b},
{"material_confusion", 0x9ba4c2},
{"material_darkness", 0x482549},
{"material_rainbow", 0xa1c8cf},
{"meat", 0x8c71be},
{"meat_burned", 0x3d424b},
{"meat_confusion", 0x8b71c0},
{"meat_cursed", 0x8b71c0},
{"meat_cursed_dry", 0x8b71c0},
{"meat_done", 0x495a77},
{"meat_fast", 0x8b71c0},
{"meat_frog", 0x8b71c0},
{"meat_fruit", 0x8b71c0},
{"meat_helpless", 0x8b71c0},
{"meat_hot", 0x6e7fa0},
{"meat_polymorph", 0x8b71c0},
{"meat_polymorph_protection", 0x8b71c0},
{"meat_pumpkin", 0x8b71c0},
{"meat_slime", 0x8b71c0},
{"meat_slime_cursed", 0x8b71c0},
{"meat_slime_green", 0x8b71c0},
{"meat_slime_orange", 0x8b71c0},
{"meat_slime_sand", 0x5886bb},
{"meat_teleport", 0x8b71c0},
{"meat_trippy", 0x8b71c0},
{"meat_warm", 0x85a0b6},
{"meat_worm", 0xc9af87},
{"metal", 0x726c61},
{"metal_chain_nohit", 0x726c61},
{"metal_hard", 0x726c61},
{"metal_molten", 0x8f897e},
{"metal_nohit", 0x726c61},
{"metal_nohit_molten", 0x8f897e},
{"metal_prop", 0x726c61},
{"metal_prop_loose", 0x726c61},
{"metal_prop_low_restitution", 0x726c61},
{"metal_prop_molten", 0x8f897e},
{"metal_rust", 0x726c61},
{"metal_rust_barrel", 0x726c61},
{"metal_rust_barrel_rust", 0x2959a2},
{"metal_rust_molten", 0x8f897e},
{"metal_rust_rust", 0x2959a2},
{"metal_sand", 0x726c61},
{"metal_sand_molten", 0x8f897e},
{"metal_wire_nohit", 0x726c61},
{"meteorite", 0x18182f},
{"meteorite_crackable", 0x30464d},
{"meteorite_green", 0x396430},
{"meteorite_static", 0x18182f},
{"meteorite_test", 0x18182f},
{"midas", 0x53e4ff},
{"midas_precursor", 0xed5716},
{"monster_powder_test", 0x5471ad},
{"moss", 0x3b8467},
{"moss_rust", 0x524f85},
{"mud", 0x2d494e},
{"mushroom", 0x7c9fb8},
{"mushroom_giant_blue", 0xccd9d9},
{"mushroom_giant_red", 0xcdd9d9},
{"mushroom_seed", 0x6c9fb8},
{"neon_tube_blood_red", 0x8ba7ff},
{"neon_tube_cyan", 0xffff88},
{"neon_tube_purple", 0xd3c9ff},
{"nest_box2d", 0x1b2d73},
{"nest_firebug_box2d", 0x1b2d73},
{"nest_static", 0x1b2d73},
{"oil", 0x28373d},
{"orb_powder", 0xb3924e},
{"peat", 0x3b8467},
{"pea_soup", 0x3b8467},
{"physics_throw_material_part2", 0xb3934e},
{"plant_material", 0x41a579},
{"plant_material_red", 0x1f204d},
{"plant_seed", 0x589bbc},
{"plasma_fading", 0xffff52},
{"plasma_fading_bright", 0xffff55},
{"plasma_fading_green", 0x7fffbe},
{"plasma_fading_pink", 0xff7fff},
{"plastic", 0x736d63},
{"plastic_molten", 0x726c61},
{"plastic_prop", 0x726c61},
{"plastic_prop_molten", 0x726c61},
{"plastic_red", 0x000090},
{"plastic_red_molten", 0xab0090},
{"poison", 0xff43cc},
{"poison_gas", 0x791556},
{"poo", 0x1c2628},
{"poop_box2d_hard", 0x243d42},
{"poo_gas", 0x1f2536},
{"porridge", 0xb5c8ce},
{"potion_glass_box2d", 0xffb36b},
{"purifying_powder", 0xbdbcb2},
{"radioactive_gas", 0x0ab48b},
{"radioactive_gas_static", 0x0ab48b},
{"radioactive_liquid", 0x08bb80},
{"radioactive_liquid_fading", 0x14ffea},
{"radioactive_liquid_yellow", 0x11ffcc},
{"rainbow_gas", 0xe3e7f7},
{"rat_powder", 0x5886bb},
{"rocket_particles", 0xfeffff},
{"rock_box2d", 0x302a29},
{"rock_box2d_hard", 0x302a29},
{"rock_box2d_nohit", 0x302a29},
{"rock_box2d_nohit_hard", 0x302a29},
{"rock_eroding", 0x1e243a},
{"rock_hard", 0x1e243a},
{"rock_hard_border", 0x121627},
{"rock_loose", 0x302a29},
{"rock_magic_bottom", 0x4c6249},
{"rock_magic_gate", 0x1e243a},
{"rock_static", 0x312c29},
{"rock_static_box2d", 0xb3934e},
{"rock_static_cursed", 0x4d4d6f},
{"rock_static_cursed_green", 0x769352},
{"rock_static_fungal", 0x64433c},
{"rock_static_glow", 0x334925},
{"rock_static_grey", 0x4d4d4d},
{"rock_static_intro", 0x312c29},
{"rock_static_intro_breakable", 0x312c29},
{"rock_static_noedge", 0x302a29},
{"rock_static_poison", 0x863069},
{"rock_static_purple", 0x2f2c32},
{"rock_static_radioactive", 0x47671d},
{"rock_static_trip_secret", 0x312c29},
{"rock_static_trip_secret2", 0x312c29},
{"rock_static_wet", 0x302a29},
{"rock_vault", 0x3a4734},
{"root", 0x24445f},
{"root_growth", 0x317159},
{"rotten_meat", 0x5886bb},
{"rotten_meat_radioactive", 0x84b2ff},
{"rust_static", 0x2056a7},
{"salt", 0xbdbcb2},
{"sand", 0x76abbd},
{"sandstone", 0x69a0b2},
{"sandstone_surface", 0x92d7ee},
{"sand_blue", 0x694237},
{"sand_herb", 0x3d9069},
{"sand_herb_vapour", 0x1b4334},
{"sand_petrify", 0x6f5f5b},
{"sand_static", 0x284348},
{"sand_static_bright", 0x426c74},
{"sand_static_rainforest", 0x285956},
{"sand_static_rainforest_dark", 0x342b39},
{"sand_static_red", 0x425474},
{"sand_surface", 0x9cd8ec},
{"shock_powder", 0x5886bb},
{"silver", 0xbfc3c4},
{"silver_molten", 0xccd7db},
{"sima", 0x0772ea},
{"skullrock", 0x14162c},
{"slime", 0x752ba6},
{"slime_green", 0x3b8467},
{"slime_static", 0x752ba6},
{"slime_yellow", 0x31aca5},
{"slush", 0xab977c},
{"smoke", 0x3f3f3f},
{"smoke_explosion", 0x403f3f},
{"smoke_magic", 0x000000},
{"smoke_static", 0x403f3f},
{"snow", 0xd6bc9a},
{"snowrock_static", 0x70563d},
{"snow_b2", 0xd6be9e},
{"snow_static", 0xd6be9e},
{"snow_sticky", 0xd6bc9a},
{"sodium", 0xbdbcb2},
{"sodium_unstable", 0xbdbcb2},
{"soil", 0x1c2628},
{"soil_dark", 0x413444},
{"soil_dead", 0x3f747b},
{"soil_lush", 0x328c6c},
{"soil_lush_dark", 0x413444},
{"spark", 0x3898ff},
{"spark_blue", 0xffffcf},
{"spark_blue_dark", 0xff9032},
{"spark_electric", 0xffff3d},
{"spark_green", 0x6fffef},
{"spark_green_bright", 0xe9ffff},
{"spark_player", 0x8e6599},
{"spark_purple", 0xff43cc},
{"spark_purple_bright", 0xff4e95},
{"spark_red", 0x162fff},
{"spark_red_bright", 0x1d3fff},
{"spark_teal", 0xbbff56},
{"spark_white", 0xffffff},
{"spark_white_bright", 0xffffff},
{"spark_yellow", 0x11cfff},
{"spore", 0x6bdaca},
{"spore_pod_stalk", 0x985644},
{"steam", 0x795e5e},
{"steam_trailer", 0x88785f},
{"steel", 0x736d63},
{"steelfrost_static", 0x6a6d55},
{"steelmoss_slanted", 0x466363},
{"steelmoss_slanted_molten", 0x627f7f},
{"steelmoss_static", 0x38505d},
{"steelmoss_static_molten", 0x627f7f},
{"steelpipe_static", 0x4c5e6d},
{"steelsmoke_static", 0x4c5e6d},
{"steelsmoke_static_molten", 0x697b8a},
{"steel_grey_static", 0x746d6b},
{"steel_molten", 0x9ab3b4},
{"steel_rust", 0x2959a2},
{"steel_rusted_no_holes", 0x39515d},
{"steel_rust_molten", 0x8f897e},
{"steel_sand", 0x726c61},
{"steel_static", 0x4a5e6c},
{"steel_static_molten", 0x697b8a},
{"steel_static_strong", 0x4a5e6c},
{"steel_static_unmeltable", 0x4a5e6c},
{"sulphur", 0x54a0aa},
{"sulphur_box2d", 0x54a0aa},
{"swamp", 0x082a2a},
{"templebrickdark_static", 0x3e4650},
{"templebrick_box2d", 0x30464d},
{"templebrick_box2d_edgetiles", 0x30464d},
{"templebrick_diamond_static", 0xf1e8c1},
{"templebrick_golden_static", 0x61d7f3},
{"templebrick_moss_static", 0x2b4055},
{"templebrick_noedge_static", 0x30464d},
{"templebrick_red", 0x313663},
{"templebrick_static", 0x30464d},
{"templebrick_static_broken", 0x2a3b41},
{"templebrick_static_ruined", 0x363b44},
{"templebrick_static_soft", 0x30464d},
{"templebrick_thick_static", 0x30464d},
{"templebrick_thick_static_noedge", 0x30464d},
{"templerock_soft", 0x2c4258},
{"templerock_static", 0x2c4258},
{"templeslab_crumbling_static", 0x3a3c44},
{"templeslab_static", 0x414751},
{"the_end", 0x191a34},
{"tnt", 0x5d6295},
{"tnt_static", 0x5d6295},
{"trailer_text", 0xffffff},
{"tubematerial", 0xbb9d57},
{"tube_physics", 0xb3934e},
{"urine", 0x00eeff},
{"vine", 0x24445f},
{"void_liquid", 0x000000},
{"vomit", 0x3d8282},
{"water", 0x596237},
{"waterrock", 0x3a2c29},
{"water_fading", 0x596237},
{"water_ice", 0x696237},
{"water_salt", 0x4c752f},
{"water_static", 0x596237},
{"water_swamp", 0x2c552f},
{"water_temp", 0x4f552f},
{"wax", 0xe1f0f4},
{"wax_b2", 0xe0f0f4},
{"wax_molten", 0xe1f0f5},
{"wizardstone", 0x464044},
{"wood", 0x1f353f},
{"wood_burns_forever", 0x213641},
{"wood_loose", 0x213641},
{"wood_player", 0x213741},
{"wood_player_b2", 0x213741},
{"wood_player_b2_vertical", 0x1e333e},
{"wood_prop", 0x213641},
{"wood_prop_durable", 0x213641},
{"wood_prop_noplayerhit", 0x213641},
{"wood_static", 0x213741},
{"wood_static_gas", 0x213641},
{"wood_static_vertical", 0x1e333d},
{"wood_static_wet", 0x213641},
{"wood_trailer", 0x213641},
{"wood_tree", 0x1e333e},
{"wood_wall", 0x213641},
};