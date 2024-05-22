/*
 * backlight_linear_to_exp.c
 *
 *
 * Copyright (c) 2020-2020 Huawei Technologies Co., Ltd.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 */

#include "backlight_linear_to_exp.h"
#include "lcd_kit_drm_panel.h"

/* level map for exp to linear  */
int level_map[BL_LVL_MAP_SIZE] = {
	0,
	4, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 9, 9, 9, 9, 9, 9, 9, 9, 9,
	9, 9, 9, 9, 10, 10, 10, 10, 10, 10,
	10, 10, 10, 10, 10, 10, 10, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 11, 11, 11, 11,
	12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
	12, 12, 13, 13, 13, 13, 13, 13, 13, 13,
	13, 13, 13, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 15, 15, 15, 15, 15, 15,
	15, 15, 15, 15, 15, 16, 16, 16, 16, 16,
	16, 16, 16, 16, 16, 17, 17, 17, 17, 17,
	17, 17, 17, 17, 17, 18, 18, 18, 18, 18,
	18, 18, 18, 18, 18, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 20, 20, 20, 20, 20,
	20, 20, 20, 20, 21, 21, 21, 21, 21, 21,
	21, 21, 21, 22, 22, 22, 22, 22, 22, 22,
	22, 22, 23, 23, 23, 23, 23, 23, 23, 23,
	24, 24, 24, 24, 24, 24, 24, 24, 24, 25,
	25, 25, 25, 25, 25, 25, 25, 26, 26, 26,
	26, 26, 26, 26, 26, 27, 27, 27, 27, 27,
	27, 27, 28, 28, 28, 28, 28, 28, 28, 28,
	29, 29, 29, 29, 29, 29, 29, 30, 30, 30,
	30, 30, 30, 30, 31, 31, 31, 31, 31, 31,
	31, 32, 32, 32, 32, 32, 32, 32, 33, 33,
	33, 33, 33, 33, 33, 34, 34, 34, 34, 34,
	34, 34, 35, 35, 35, 35, 35, 35, 36, 36,
	36, 36, 36, 36, 36, 37, 37, 37, 37, 37,
	37, 38, 38, 38, 38, 38, 38, 39, 39, 39,
	39, 39, 39, 40, 40, 40, 40, 40, 40, 41,
	41, 41, 41, 41, 41, 42, 42, 42, 42, 42,
	42, 43, 43, 43, 43, 43, 44, 44, 44, 44,
	44, 44, 45, 45, 45, 45, 45, 46, 46, 46,
	46, 46, 47, 47, 47, 47, 47, 47, 48, 48,
	48, 48, 48, 49, 49, 49, 49, 49, 50, 50,
	50, 50, 50, 51, 51, 51, 51, 51, 52, 52,
	52, 52, 52, 53, 53, 53, 53, 53, 54, 54,
	54, 54, 55, 55, 55, 55, 55, 56, 56, 56,
	56, 56, 57, 57, 57, 57, 58, 58, 58, 58,
	58, 59, 59, 59, 59, 60, 60, 60, 60, 61,
	61, 61, 61, 61, 62, 62, 62, 62, 63, 63,
	63, 63, 64, 64, 64, 64, 65, 65, 65, 65,
	66, 66, 66, 66, 67, 67, 67, 67, 68, 68,
	68, 68, 69, 69, 69, 69, 70, 70, 70, 70,
	71, 71, 71, 71, 72, 72, 72, 72, 73, 73,
	73, 74, 74, 74, 74, 75, 75, 75, 75, 76,
	76, 76, 77, 77, 77, 77, 78, 78, 78, 79,
	79, 79, 79, 80, 80, 80, 81, 81, 81, 81,
	82, 82, 82, 83, 83, 83, 84, 84, 84, 84,
	85, 85, 85, 86, 86, 86, 87, 87, 87, 88,
	88, 88, 88, 89, 89, 89, 90, 90, 90, 91,
	91, 91, 92, 92, 92, 93, 93, 93, 94, 94,
	94, 95, 95, 95, 96, 96, 96, 97, 97, 97,
	98, 98, 98, 99, 99, 99, 100, 100, 101, 101,
	101, 102, 102, 102, 103, 103, 103, 104, 104, 104,
	105, 105, 106, 106, 106, 107, 107, 107, 108, 108,
	109, 109, 109, 110, 110, 110, 111, 111, 112, 112,
	112, 113, 113, 114, 114, 114, 115, 115, 116, 116,
	116, 117, 117, 118, 118, 118, 119, 119, 120, 120,
	120, 121, 121, 122, 122, 122, 123, 123, 124, 124,
	125, 125, 125, 126, 126, 127, 127, 128, 128, 128,
	129, 129, 130, 130, 131, 131, 132, 132, 132, 133,
	133, 134, 134, 135, 135, 136, 136, 137, 137, 137,
	138, 138, 139, 139, 140, 140, 141, 141, 142, 142,
	143, 143, 144, 144, 145, 145, 146, 146, 147, 147,
	148, 148, 149, 149, 150, 150, 151, 151, 152, 152,
	153, 153, 154, 154, 155, 155, 156, 156, 157, 157,
	158, 158, 159, 159, 160, 160, 161, 162, 162, 163,
	163, 164, 164, 165, 165, 166, 166, 167, 168, 168,
	169, 169, 170, 170, 171, 171, 172, 173, 173, 174,
	174, 175, 175, 176, 177, 177, 178, 178, 179, 180,
	180, 181, 181, 182, 183, 183, 184, 184, 185, 186,
	186, 187, 187, 188, 189, 189, 190, 191, 191, 192,
	192, 193, 194, 194, 195, 196, 196, 197, 198, 198,
	199, 200, 200, 201, 201, 202, 203, 203, 204, 205,
	205, 206, 207, 207, 208, 209, 210, 210, 211, 212,
	212, 213, 214, 214, 215, 216, 216, 217, 218, 219,
	219, 220, 221, 221, 222, 223, 224, 224, 225, 226,
	227, 227, 228, 229, 230, 230, 231, 232, 233, 233,
	234, 235, 236, 236, 237, 238, 239, 239, 240, 241,
	242, 242, 243, 244, 245, 246, 246, 247, 248, 249,
	250, 250, 251, 252, 253, 254, 255, 255, 256, 257,
	258, 259, 259, 260, 261, 262, 263, 264, 265, 265,
	266, 267, 268, 269, 270, 271, 271, 272, 273, 274,
	275, 276, 277, 278, 278, 279, 280, 281, 282, 283,
	284, 285, 286, 287, 288, 288, 289, 290, 291, 292,
	293, 294, 295, 296, 297, 298, 299, 300, 301, 302,
	303, 304, 305, 306, 307, 308, 308, 309, 310, 311,
	312, 313, 314, 315, 316, 317, 318, 320, 321, 322,
	323, 324, 325, 326, 327, 328, 329, 330, 331, 332,
	333, 334, 335, 336, 337, 338, 339, 340, 342, 343,
	344, 345, 346, 347, 348, 349, 350, 351, 353, 354,
	355, 356, 357, 358, 359, 360, 362, 363, 364, 365,
	366, 367, 369, 370, 371, 372, 373, 374, 376, 377,
	378, 379, 380, 382, 383, 384, 385, 386, 388, 389,
	390, 391, 393, 394, 395, 396, 398, 399, 400, 401,
	403, 404, 405, 406, 408, 409, 410, 412, 413, 414,
	416, 417, 418, 419, 421, 422, 423, 425, 426, 427,
	429, 430, 432, 433, 434, 436, 437, 438, 440, 441,
	443, 444, 445, 447, 448, 450, 451, 452, 454, 455,
	457, 458, 460, 461, 462, 464, 465, 467, 468, 470,
	471, 473, 474, 476, 477, 479, 480, 482, 483, 485,
	486, 488, 489, 491, 492, 494, 495, 497, 499, 500,
	502, 503, 505, 506, 508, 510, 511, 513, 514, 516,
	518, 519, 521, 523, 524, 526, 527, 529, 531, 532,
	534, 536, 537, 539, 541, 542, 544, 546, 548, 549,
	551, 553, 554, 556, 558, 560, 561, 563, 565, 567,
	569, 570, 572, 574, 576, 577, 579, 581, 583, 585,
	587, 588, 590, 592, 594, 596, 598, 599, 601, 603,
	605, 607, 609, 611, 613, 615, 616, 618, 620, 622,
	624, 626, 628, 630, 632, 634, 636, 638, 640, 642,
	644, 646, 648, 650, 652, 654, 656, 658, 660, 662,
	664, 666, 668, 670, 673, 675, 677, 679, 681, 683,
	685, 687, 689, 692, 694, 696, 698, 700, 702, 705,
	707, 709, 711, 713, 716, 718, 720, 722, 725, 727,
	729, 731, 734, 736, 738, 740, 743, 745, 747, 750,
	752, 754, 757, 759, 761, 764, 766, 769, 771, 773,
	776, 778, 781, 783, 785, 788, 790, 793, 795, 798,
	800, 803, 805, 808, 810, 813, 815, 818, 820, 823,
	825, 828, 830, 833, 836, 838, 841, 843, 846, 849,
	851, 854, 856, 859, 862, 864, 867, 870, 872, 875,
	878, 881, 883, 886, 889, 892, 894, 897, 900, 903,
	905, 908, 911, 914, 917, 920, 922, 925, 928, 931,
	934, 937, 940, 943, 945, 948, 951, 954, 957, 960,
	963, 966, 969, 972, 975, 978, 981, 984, 987, 990,
	993, 996, 999, 1002, 1006, 1009, 1012, 1015, 1018, 1021,
	1024, 1028, 1031, 1034, 1037, 1040, 1043, 1047, 1050, 1053,
	1056, 1060, 1063, 1066, 1070, 1073, 1076, 1079, 1083, 1086,
	1089, 1093, 1096, 1100, 1103, 1106, 1110, 1113, 1117, 1120,
	1124, 1127, 1130, 1134, 1137, 1141, 1144, 1148, 1152, 1155,
	1159, 1162, 1166, 1169, 1173, 1177, 1180, 1184, 1188, 1191,
	1195, 1199, 1202, 1206, 1210, 1213, 1217, 1221, 1225, 1228,
	1232, 1236, 1240, 1244, 1247, 1251, 1255, 1259, 1263, 1267,
	1271, 1275, 1278, 1282, 1286, 1290, 1294, 1298, 1302, 1306,
	1310, 1314, 1318, 1322, 1326, 1331, 1335, 1339, 1343, 1347,
	1351, 1355, 1359, 1364, 1368, 1372, 1376, 1381, 1385, 1389,
	1393, 1398, 1402, 1406, 1410, 1415, 1419, 1424, 1428, 1432,
	1437, 1441, 1446, 1450, 1454, 1459, 1463, 1468, 1472, 1477,
	1481, 1486, 1491, 1495, 1500, 1504, 1509, 1514, 1518, 1523,
	1528, 1532, 1537, 1542, 1546, 1551, 1556, 1561, 1566, 1570,
	1575, 1580, 1585, 1590, 1595, 1600, 1604, 1609, 1614, 1619,
	1624, 1629, 1634, 1639, 1644, 1649, 1654, 1659, 1665, 1670,
	1675, 1680, 1685, 1690, 1695, 1701, 1706, 1711, 1716, 1722,
	1727, 1732, 1738, 1743, 1748, 1754, 1759, 1764, 1770, 1775,
	1781, 1786, 1792, 1797, 1803, 1808, 1814, 1819, 1825, 1830,
	1836, 1842, 1847, 1853, 1859, 1864, 1870, 1876, 1881, 1887,
	1893, 1899, 1905, 1911, 1916, 1922, 1928, 1934, 1940, 1946,
	1952, 1958, 1964, 1970, 1976, 1982, 1988, 1994, 2000, 2006,
	2013, 2019, 2025, 2031, 2037, 2044, 2050, 2056, 2062, 2069,
	2075, 2081, 2088, 2094, 2101, 2107, 2113, 2120, 2126, 2133,
	2140, 2146, 2153, 2159, 2166, 2172, 2179, 2186, 2192, 2199,
	2206, 2213, 2219, 2226, 2233, 2240, 2247, 2254, 2261, 2267,
	2274, 2281, 2288, 2295, 2302, 2309, 2317, 2324, 2331, 2338,
	2345, 2352, 2359, 2367, 2374, 2381, 2388, 2396, 2403, 2410,
	2418, 2425, 2433, 2440, 2448, 2455, 2463, 2470, 2478, 2485,
	2493, 2500, 2508, 2516, 2523, 2531, 2539, 2547, 2554, 2562,
	2570, 2578, 2586, 2594, 2602, 2610, 2618, 2626, 2634, 2642,
	2650, 2658, 2666, 2674, 2682, 2691, 2699, 2707, 2715, 2724,
	2732, 2740, 2749, 2757, 2766, 2774, 2782, 2791, 2800, 2808,
	2817, 2825, 2834, 2843, 2851, 2860, 2869, 2878, 2886, 2895,
	2904, 2913, 2922, 2931, 2940, 2949, 2958, 2967, 2976, 2985,
	2994, 3003, 3012, 3022, 3031, 3040, 3049, 3059, 3068, 3077,
	3087, 3096, 3106, 3115, 3125, 3134, 3144, 3153, 3163, 3173,
	3182, 3192, 3202, 3212, 3221, 3231, 3241, 3251, 3261, 3271,
	3281, 3291, 3301, 3311, 3321, 3331, 3342, 3352, 3362, 3372,
	3383, 3393, 3403, 3414, 3424, 3435, 3445, 3456, 3466, 3477,
	3487, 3498, 3509, 3519, 3530, 3541, 3552, 3563, 3573, 3584,
	3595, 3606, 3617, 3628, 3639, 3651, 3662, 3673, 3684, 3695,
	3707, 3718, 3729, 3741, 3752, 3764, 3775, 3787, 3798, 3810,
	3821, 3833, 3845, 3856, 3868, 3880, 3892, 3904, 3916, 3928,
	3940, 3952, 3964, 3976, 3988, 4000, 4012, 4025, 4037, 4049,
	4062, 4074, 4086, 4099, 4111, 4124, 4137, 4149, 4162, 4174,
	4187, 4200, 4213, 4226, 4239, 4252, 4264, 4278, 4291, 4304,
	4317, 4330, 4343, 4356, 4370, 4383, 4396, 4410, 4423, 4437,
	4450, 4464, 4478, 4491, 4505, 4519, 4532, 4546, 4560, 4574,
	4588, 4602, 4616, 4630, 4644, 4658, 4673, 4687, 4701, 4716,
	4730, 4744, 4759, 4773, 4788, 4802, 4817, 4832, 4847, 4861,
	4876, 4891, 4906, 4921, 4936, 4951, 4966, 4981, 4996, 5012,
	5027, 5042, 5058, 5073, 5089, 5104, 5120, 5135, 5151, 5167,
	5182, 5198, 5214, 5230, 5246, 5262, 5278, 5294, 5310, 5326,
	5343, 5359, 5375, 5392, 5408, 5425, 5441, 5458, 5474, 5491,
	5508, 5525, 5541, 5558, 5575, 5592, 5609, 5626, 5644, 5661,
	5678, 5695, 5713, 5730, 5748, 5765, 5783, 5800, 5818, 5836,
	5854, 5871, 5889, 5907, 5925, 5943, 5961, 5980, 5998, 6016,
	6035, 6053, 6071, 6090, 6108, 6127, 6146, 6164, 6183, 6202,
	6221, 6240, 6259, 6278, 6297, 6316, 6336, 6355, 6374, 6394,
	6413, 6433, 6452, 6472, 6492, 6512, 6531, 6551, 6571, 6591,
	6611, 6632, 6652, 6672, 6692, 6713, 6733, 6754, 6774, 6795,
	6816, 6836, 6857, 6878, 6899, 6920, 6941, 6962, 6984, 7005,
	7026, 7048, 7069, 7091, 7112, 7134, 7156, 7178, 7199, 7221,
	7243, 7265, 7288, 7310, 7332, 7354, 7377, 7399, 7422, 7444,
	7467, 7490, 7513, 7536, 7559, 7582, 7605, 7628, 7651, 7674,
	7698, 7721, 7745, 7768, 7792, 7816, 7840, 7863, 7887, 7911,
	7936, 7960, 7984, 8008, 8033, 8057, 8082, 8106, 8131, 8156,
	8181, 8206, 8231, 8256, 8281, 8306, 8331, 8357, 8382, 8408,
	8433, 8459, 8485, 8511, 8537, 8563, 8589, 8615, 8641, 8667,
	8694, 8720, 8747, 8773, 8800, 8827, 8854, 8881, 8908, 8935,
	8962, 8989, 9017, 9044, 9072, 9100, 9127, 9155, 9183, 9211,
	9239, 9267, 9295, 9324, 9352, 9380, 9409, 9438, 9466, 9495,
	9524, 9553, 9582, 9611, 9641, 9670, 9700, 9729, 9759, 9788,
	9818, 9848, 9878, 9908, 9938, 9969, 10000
};

int bl_lvl_map(int level)
{
	uint32_t low = 0;
	uint32_t high = BL_LVL_MAP_SIZE - 1;
	int mid;
	unsigned int bl_max_level = lcm_get_panel_backlight_max_level();

	if (level < 0) {
		LCD_KIT_INFO("Need Valid Data! level = %d", level);
		return 0;
	}
	if (level > bl_max_level)
		level = bl_max_level;

	while (low < high) {
		mid = (low + high) >> 1;
		if (level > level_map[mid]) {
			low = mid + 1;
		} else if (level < level_map[mid]) {
			high = mid - 1;
		} else {
			while ((mid > 0) &&
				(level_map[mid - 1] == level_map[mid]))
				mid--;
			return mid;
		}
	}
	while (low > 0 && level_map[low] > level)
		low--;
	return low;
}