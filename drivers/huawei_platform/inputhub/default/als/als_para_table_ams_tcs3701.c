/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: als para table ams tcs3701 source file
 * Author: linjianpeng <linjianpeng1@huawei.com>
 * Create: 2020-05-25
 */

#include "als_para_table_ams_tcs3701.h"

#include <linux/err.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/of_gpio.h>
#include <linux/slab.h>
#include <linux/types.h>

#include <securec.h>

#include "als_tp_color.h"
#include "contexthub_boot.h"
#include "contexthub_route.h"

/*
 * Although the GRAY and Black TP's RGB ink is same ,
 * but some product may has both the GRAY
 * and Black TP,so must set the als para for  GRAY and Black TP
 * Although the CAFE_2 and BROWN TP's RGB ink is same ,
 * but some product may has both the CAFE_2
 * and BROWN TP,so must set the als para for  CAFE_2 and BROWN TP
 */
tcs3701_als_para_table tcs3701_als_para_diff_tp_color_table[] = {
	{ OTHER, OTHER, DEFAULT_TPLCD, OTHER,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 1400, 540,
	    -480, 570, -610, 9045, -1017, 193, -66, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},

	{ VOGUE, V3, BOE_TPLCD, WHITE,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 5010, 130,
	    -100, 140, -180, 8359, -1072, 267, -183, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, V3, BOE_TPLCD, GRAY,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 5010, 130,
	    -100, 140, -180, 8359, -1072, 267, -183, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, V3, BOE_TPLCD, BLACK,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 5010, 130,
	    -100, 140, -180, 8359, -1072, 267, -183, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, V3, BOE_TPLCD, BLACK2,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 5010, 130,
	    -100, 140, -180, 8359, -1072, 267, -183, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, V3, BOE_TPLCD, GOLD,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 5010, 130,
	    -100, 140, -180, 8359, -1072, 267, -183, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, V3, LG_TPLCD, WHITE,
	  { 1200, 1000, 700, 350, 200, 300, 1000, 1420, 1420, 1400, 2082, 500,
	    -30, -560, -50, 4753, -846, 815, -662, 5126, 2798, 6544, 2456, 150,
	    0, 0, 4578, 18389, 20875, 7861, 4000, 250 }
	},
	{ VOGUE, V3, LG_TPLCD, GRAY,
	  { 1200, 1000, 700, 350, 200, 300, 1000, 1420, 1420, 1400, 2082, 500,
	    -30, -560, -50, 4753, -846, 815, -662, 5126, 2798, 6544, 2456, 150,
	    0, 0, 4578, 18389, 20875, 7861, 4000, 250 }
	},
	{ VOGUE, V3, LG_TPLCD, BLACK,
	  { 1200, 1000, 700, 350, 200, 300, 1000, 1420, 1420, 1400, 2082, 500,
	    -30, -560, -50, 4753, -846, 815, -662, 5126, 2798, 6544, 2456, 150,
	    0, 0, 4578, 18389, 20875, 7861, 4000, 250 }
	},
	{ VOGUE, V3, LG_TPLCD, BLACK2,
	  { 1200, 1000, 700, 350, 200, 300, 1000, 1420, 1420, 1400, 2082, 500,
	    -30, -560, -50, 4753, -846, 815, -662, 5126, 2798, 6544, 2456, 150,
	    0, 0, 4578, 18389, 20875, 7861, 4000, 250 }
	},
	{ VOGUE, V3, LG_TPLCD, GOLD,
	  { 1200, 1000, 700, 350, 200, 300, 1000, 1420, 1420, 1400, 2082, 500,
	    -30, -560, -50, 4753, -846, 815, -662, 5126, 2798, 6544, 2456, 150,
	    0, 0, 4578, 18389, 20875, 7861, 4000, 250 }
	},

	{ VOGUE, VN2, BOE_TPLCD, WHITE,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 1400, 540,
	    -480, 570, -610, 9045, -1017, 193, -66, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, VN2, BOE_TPLCD, GRAY,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 1400, 540,
	    -480, 570, -610, 9045, -1017, 193, -66, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, VN2, BOE_TPLCD, BLACK,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 1400, 540,
	    -480, 570, -610, 9045, -1017, 193, -66, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, VN2, BOE_TPLCD, BLACK2,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 1400, 540,
	    -480, 570, -610, 9045, -1017, 193, -66, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, VN2, BOE_TPLCD, GOLD,
	  { 1500, 1000, 700, 350, 320, 550, 700, 1000, 1000, 980, 1400, 540,
	    -480, 570, -610, 9045, -1017, 193, -66, 4925, 2860, 12000, -749,
	    100, 0, 0, 4300, 18263, 19510, 7029, 4000, 250 }
	},
	{ VOGUE, VN2, LG_TPLCD, WHITE,
	  { 1200, 1000, 700, 350, 200, 300, 680, 1330, 1330, 1300, 6163, 140,
	    -90, 30, -90, 7570, -926, 510, -381, 5126, 2798, 6544, 2456, 150,
	    -2, 0, 4218, 18027, 18492, 5692, 4000, 250 }
	},
	{ VOGUE, VN2, LG_TPLCD, GRAY,
	  { 1200, 1000, 700, 350, 200, 300, 680, 1330, 1330, 1300, 6163, 140,
	    -90, 30, -90, 7570, -926, 510, -381, 5126, 2798, 6544, 2456, 150,
	    -2, 0, 4218, 18027, 18492, 5692, 4000, 250 }
	},
	{ VOGUE, VN2, LG_TPLCD, BLACK,
	  { 1200, 1000, 700, 350, 200, 300, 680, 1330, 1330, 1300, 6163, 140,
	    -90, 30, -90, 7570, -926, 510, -381, 5126, 2798, 6544, 2456, 150,
	    -2, 0, 4218, 18027, 18492, 5692, 4000, 250 }
	},
	{ VOGUE, VN2, LG_TPLCD, BLACK2,
	  { 1200, 1000, 700, 350, 200, 300, 680, 1330, 1330, 1300, 6163, 140,
	    -90, 30, -90, 7570, -926, 510, -381, 5126, 2798, 6544, 2456, 150,
	    -2, 0, 4218, 18027, 18492, 5692, 4000, 250 }
	},
	{ VOGUE, VN2, LG_TPLCD, GOLD,
	  { 1200, 1000, 700, 350, 200, 300, 680, 1330, 1330, 1300, 6163, 140,
	    -90, 30, -90, 7570, -926, 510, -381, 5126, 2798, 6544, 2456, 150,
	    -2, 0, 4218, 18027, 18492, 5692, 4000, 250 }
	},

	{ TAHITI, V3, BOE_TPLCD, WHITE,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},
	{ TAHITI, V3, BOE_TPLCD, GRAY,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},
	{ TAHITI, V3, BOE_TPLCD, BLACK,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},
	{ TAHITI, V3, BOE_TPLCD, BLACK2,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},
	{ TAHITI, V3, BOE_TPLCD, GOLD,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},

	{ TAHITI, V4, BOE_TPLCD, WHITE,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},
	{ TAHITI, V4, BOE_TPLCD, GRAY,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},
	{ TAHITI, V4, BOE_TPLCD, BLACK,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},
	{ TAHITI, V4, BOE_TPLCD, BLACK2,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},
	{ TAHITI, V4, BOE_TPLCD, GOLD,
	  { 1500, 1000, 700, 350, 200, 300, 400, 800, 800, 780, 5177, 380,
	    -460, 600, -460, 9303, -594, 1613, -1277, 4925, 2860, 12000, -749,
	    100, 0, 0, 1696, 9793, 6550, 1485, 4000, 250 }
	},

	{ TAHITI, VN1, BOE_TPLCD, WHITE,
	  { 1600, 1200, 700, 400, 400, 1200, 2200, 2600, 2600, 2580, 5476, 153,
	  -127, 708, -728, 14256, -864, 1067, -917, 4925, 2860, 12000, -749,
	    100, 0, 0, 2025, 10051, 8226, 2587, 4000, 250 }
	},
	{ TAHITI, VN1, BOE_TPLCD, GRAY,
	  { 1600, 1200, 700, 400, 400, 1200, 2200, 2600, 2600, 2580, 5476, 153,
	  -127, 708, -728, 14256, -864, 1067, -917, 4925, 2860, 12000, -749,
	    100, 0, 0, 2025, 10051, 8226, 2587, 4000, 250 }
	},
	{ TAHITI, VN1, BOE_TPLCD, BLACK,
	  { 1600, 1200, 700, 400, 400, 1200, 2200, 2600, 2600, 2580, 5476, 153,
	  -127, 708, -728, 14256, -864, 1067, -917, 4925, 2860, 12000, -749,
	    100, 0, 0, 2025, 10051, 8226, 2587, 4000, 250 }
	},
	{ TAHITI, VN1, BOE_TPLCD, BLACK2,
	  { 1600, 1200, 700, 400, 400, 1200, 2200, 2600, 2600, 2580, 5476, 153,
	  -127, 708, -728, 14256, -864, 1067, -917, 4925, 2860, 12000, -749,
	    100, 0, 0, 2025, 10051, 8226, 2587, 4000, 250 }
	},
	{ TAHITI, VN1, BOE_TPLCD, GOLD,
	  { 1600, 1200, 700, 400, 400, 1200, 2200, 2600, 2600, 2580, 5476, 153,
	  -127, 708, -728, 14256, -864, 1067, -917, 4925, 2860, 12000, -749,
	    100, 0, 0, 2025, 10051, 8226, 2587, 4000, 250 }
	},

	{ ELLE, V3, DEFAULT_TPLCD, WHITE,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ ELLE, V3, DEFAULT_TPLCD, GRAY,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ ELLE, V3, DEFAULT_TPLCD, BLACK,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ ELLE, V3, DEFAULT_TPLCD, BLACK2,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ ELLE, V3, DEFAULT_TPLCD, GOLD,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},

	{ ELLE, VN1, DEFAULT_TPLCD, WHITE,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ ELLE, VN1, DEFAULT_TPLCD, GRAY,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ ELLE, VN1, DEFAULT_TPLCD, BLACK,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ ELLE, VN1, DEFAULT_TPLCD, BLACK2,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ ELLE, VN1, DEFAULT_TPLCD, GOLD,
	  { 100, 970, 1010, 220, -1790, 1578, 0, 110, 2630, 1540, -3170, 2026,
	    0, 0, 19, 214, 0, 0, 2532, 6340, 0, 0, 958, 1, 19, 0, 14771, 5654,
	    6330, 3058, 4000, 250 }
	},
	{ TETON, V3, BOE_TPLCD, OTHER,
	  { 50, -1543, 2081, 5757, 2253, 4800, 0, 295, -245, -114, -255, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 1998, 1135,
	    850, 387, 4000, 250 }
	},
	{ TETON, V3, SAMSUNG_TPLCD, OTHER,
	  { 50,  -2247, 3481, 9594, 758, 810, 0, 295, -245, -114, -255, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6338, 2899,
	    2894, 1662, 4000, 250 }
	},
	{ ANNA, V3, DEFAULT_TPLCD, WHITE,
	  { 50, 638, 469, 5886, -907, 985, 0, 295, -245, -114, -255, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},
	{ ANNA, V3, DEFAULT_TPLCD, GRAY,
	  { 50, 638, 469, 5886, -907, 985, 0, 295, -245, -114, -255, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},
	{ ANNA, V3, DEFAULT_TPLCD, BLACK,
	  { 50, 638, 469, 5886, -907, 985, 0, 295, -245, -114, -255, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},
	{ ANNA, V3, DEFAULT_TPLCD, BLACK2,
	  { 50, 638, 469, 5886, -907, 985, 0, 295, -245, -114, -255, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},
	{ ANNA, V3, DEFAULT_TPLCD, GOLD,
	  { 50, 638, 469, 5886, -907, 985, 0, 295, -245, -114, -255, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},

	{ ANNA, VN2, DEFAULT_TPLCD, WHITE,
	  { 50, 638, 469, 5886, -907, 1064, 0, 1, 49, 222, 36, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},
	{ ANNA, VN2, DEFAULT_TPLCD, GRAY,
	  { 50, 638, 469, 5886, -907, 1064, 0, 1, 49, 222, 36, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},
	{ ANNA, VN2, DEFAULT_TPLCD, BLACK,
	  { 50, 638, 469, 5886, -907, 1064, 0, 1, 49, 222, 36, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},
	{ ANNA, VN2, DEFAULT_TPLCD, BLACK2,
	  { 50, 638, 469, 5886, -907, 1064, 0, 1, 49, 222, 36, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},
	{ ANNA, VN2, DEFAULT_TPLCD, GOLD,
	  { 50, 638, 469, 5886, -907, 1064, 0, 1, 49, 222, 36, 0,
	    0, 1, 20, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 6035, 2486,
	    2763, 1090, 4000, 250 }
	},

	{ EDIN, V3, BOE_TPLCD, WHITE,
	  { 50, 1670, -460, 1600, 30, 1616, 0, 2710, 8380, -9190, 3950, 799,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 4831, 2160,
	    2123, 830, 4000, 250 }
	},
	{ EDIN, V3, BOE_TPLCD, GRAY,
	  { 50, 1670, -460, 1600, 30, 1616, 0, 2710, 8380, -9190, 3950, 799,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 4831, 2160,
	    2123, 830, 4000, 250 }
	},
	{ EDIN, V3, BOE_TPLCD, BLACK,
	  { 50, 1670, -460, 1600, 30, 1616, 0, 2710, 8380, -9190, 3950, 799,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 4831, 2160,
	    2123, 830, 4000, 250 }
	},
	{ EDIN, V3, BOE_TPLCD, BLACK2,
	  { 50, 1670, -460, 1600, 30, 1616, 0, 2710, 8380, -9190, 3950, 799,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 4831, 2160,
	    2123, 830, 4000, 250 }
	},
	{ EDIN, V3, BOE_TPLCD, GOLD,
	  { 50, 1670, -460, 1600, 30, 1616, 0, 2710, 8380, -9190, 3950, 799,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 4831, 2160,
	    2123, 830, 4000, 250 }
	},
	{ EDIN, V3, VISI_TPLCD, WHITE,
	  { 50, 874, 189, 2149, -967, 1858, 0, 874, 189, 2149, -967, 1858,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 5021, 1912,
	    2371, 1038, 4000, 250 }
	},
	{ EDIN, V3, VISI_TPLCD, GRAY,
	  { 50, 874, 189, 2149, -967, 1858, 0, 874, 189, 2149, -967, 1858,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 5021, 1912,
	    2371, 1038, 4000, 250 }
	},
	{ EDIN, V3, VISI_TPLCD, BLACK,
	  { 50, 874, 189, 2149, -967, 1858, 0, 874, 189, 2149, -967, 1858,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 5021, 1912,
	    2371, 1038, 4000, 250 }
	},
	{ EDIN, V3, VISI_TPLCD, BLACK2,
	  { 50, 874, 189, 2149, -967, 1858, 0, 874, 189, 2149, -967, 1858,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 5021, 1912,
	    2371, 1038, 4000, 250 }
	},
	{ EDIN, V3, VISI_TPLCD, GOLD,
	  { 50, 874, 189, 2149, -967, 1858, 0, 874, 189, 2149, -967, 1858,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 5021, 1912,
	    2371, 1038, 4000, 250 }
	},

	{ ANG, V3, VISI_TPLCD, OTHER,
	  { 50, 313, 135, 7041, 883, 969, 0, 313, 135, 7041, 883, 969,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 3948, 1427,
	    1916, 857, 4000, 250 }
	},

	{ ANG, V3, BOE_TPLCD, OTHER,
	  { 50, -14363, 14855, 20137, 13703, 1209, 0, -14363, 14855, 20137, 13703, 1209,
	    0, 1, 90, -1000, 0, 0, 2776, 12000, 0, 0, -317, 1, 20, 0, 4425, 1798,
	    2031, 762, 4000, 250 }
	},

	{ ANG, V3, DEFAULT_TPLCD, OTHER,
	  { 0 }
	},

	{ BAH3, V3, DEFAULT_TPLCD, WHITE,
	 { 100, 800, 92, 9, 535, -714, 0, 799, 536, -475, -98, -396,
	   0, 53, 5172, 0, 0, 1861, 2799, 0, 0, 4246, 53, 31782, 12764, 11864,
	   8695, 30000, 200 } },
	{ BAH3, V3, DEFAULT_TPLCD, BLACK,
	 { 100, 799, 1110, -299, -2352, 908, 0, 800, 536, -475, -98, -396,
	   0, 53, 10287, 0, 0, 1179, 2799, 0, 0, 4246, 53, 14237, 6622, 5075,
	   3210, 30000, 200 } },
};

tcs3701_als_para_table *als_get_tcs3701_table_by_id(uint32_t id)
{
	if (id >= ARRAY_SIZE(tcs3701_als_para_diff_tp_color_table))
		return NULL;
	return &(tcs3701_als_para_diff_tp_color_table[id]);
}

tcs3701_als_para_table *als_get_tcs3701_first_table(void)
{
	return &(tcs3701_als_para_diff_tp_color_table[0]);
}

uint32_t als_get_tcs3701_table_count(void)
{
	return ARRAY_SIZE(tcs3701_als_para_diff_tp_color_table);
}
