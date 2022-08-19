/*
 * Copyright 2019 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 *
 * Generated code from MX8M_DDR_tool
 * Align with uboot version:
 * imx_v2018.03_4.14.78_1.0.0_ga ~ imx_v2018.04_4.19.35_1.0.0_ga
 */

#include <linux/kernel.h>
#include <asm/arch/ddr.h>

struct dram_cfg_param ddr_ddrc_cfg[] = {
	/** Initialize DDRC registers **/
	{ 0x3d400000, 0x81040010 },
	{ 0x3d400030, 0x20 },
	{ 0x3d400034, 0x221306 },
	{ 0x3d400050, 0x210070 },
	{ 0x3d400054, 0x10008 },
	{ 0x3d400060, 0x0 },
	{ 0x3d400064, 0x92014a },
	{ 0x3d4000c0, 0x0 },
	{ 0x3d4000c4, 0x1000 },
	{ 0x3d4000d0, 0xc0030126 },
	{ 0x3d4000d4, 0x770000 },
	{ 0x3d4000dc, 0x8340105 },
	{ 0x3d4000e0, 0x180200 },
	{ 0x3d4000e4, 0x110000 },
	{ 0x3d4000e8, 0x2000600 },
	{ 0x3d4000ec, 0x810 },
	{ 0x3d4000f0, 0x20 },
	{ 0x3d4000f4, 0xec7 },
	{ 0x3d400100, 0x11122914 },
	{ 0x3d400104, 0x4051c },
	{ 0x3d400108, 0x608050d },
	{ 0x3d40010c, 0x400c },
	{ 0x3d400110, 0x8030409 },
	{ 0x3d400114, 0x6060403 },
	{ 0x3d40011c, 0x606 },
	{ 0x3d400120, 0x7070d0c },
	{ 0x3d400124, 0x2040a },
	{ 0x3d40012c, 0x1809010e },
	{ 0x3d400130, 0x8 },
	{ 0x3d40013c, 0x0 },
	{ 0x3d400180, 0x1000040 },
	{ 0x3d400184, 0x493e },
	{ 0x3d400190, 0x38b8207 },
	{ 0x3d400194, 0x2020303 },
	{ 0x3d400198, 0x7f04011 },
	{ 0x3d40019c, 0xb0 },
	{ 0x3d4001a0, 0xe0400018 },
	{ 0x3d4001a4, 0x48005a },
	{ 0x3d4001a8, 0x80000000 },
	{ 0x3d4001b0, 0x1 },
	{ 0x3d4001b4, 0xb07 },
	{ 0x3d4001b8, 0x4 },
	{ 0x3d4001c0, 0x1 },
	{ 0x3d4001c4, 0x0 },
	{ 0x3d400200, 0x3f1f },
	{ 0x3d400204, 0x3f0909 },
	{ 0x3d400208, 0x700 },
	{ 0x3d40020c, 0x0 },
	{ 0x3d400210, 0x1f1f },
	{ 0x3d400214, 0x7070707 },
	{ 0x3d400218, 0x7070707 },
	{ 0x3d40021c, 0xf07 },
	{ 0x3d400220, 0x3f01 },
	{ 0x3d400240, 0x6000610 },
	{ 0x3d400244, 0x1323 },
	{ 0x3d400400, 0x100 },
	{ 0x3d400250, 0x317d1a07 },
	{ 0x3d400254, 0xf },
	{ 0x3d40025c, 0x2a001b76 },
	{ 0x3d400264, 0x7300b473 },
	{ 0x3d40026c, 0x30000e06 },
	{ 0x3d400300, 0x14 },
	{ 0x3d40036c, 0x10 },
	{ 0x3d400404, 0x13193 },
	{ 0x3d400408, 0x6096 },
	{ 0x3d400490, 0x1 },
	{ 0x3d400494, 0x2000c00 },
	{ 0x3d400498, 0x3c00db },
	{ 0x3d40049c, 0x100009 },
	{ 0x3d4004a0, 0x2 },
	{ 0x3d402050, 0x210070 },
	{ 0x3d402064, 0x400093 },
	{ 0x3d4020dc, 0x40105 },
	{ 0x3d4020e0, 0x0 },
	{ 0x3d4020e8, 0x2000600 },
	{ 0x3d4020ec, 0x10 },
	{ 0x3d402100, 0xb081209 },
	{ 0x3d402104, 0x2020d },
	{ 0x3d402108, 0x5050309 },
	{ 0x3d40210c, 0x400c },
	{ 0x3d402110, 0x5030206 },
	{ 0x3d402114, 0x3030202 },
	{ 0x3d40211c, 0x303 },
	{ 0x3d402120, 0x4040d06 },
	{ 0x3d402124, 0x20208 },
	{ 0x3d40212c, 0x1205010e },
	{ 0x3d402130, 0x8 },
	{ 0x3d40213c, 0x0 },
	{ 0x3d402180, 0x1000040 },
	{ 0x3d402190, 0x3858204 },
	{ 0x3d402194, 0x2020303 },
	{ 0x3d4021b4, 0x504 },
	{ 0x3d4021b8, 0x4 },
	{ 0x3d402240, 0x6000604 },
	{ 0x3d4020f4, 0xec7 },
};

/* PHY Initialize Configuration */
struct dram_cfg_param ddr_ddrphy_cfg[] = {
	{ 0x1005f, 0x2fd },
	{ 0x1015f, 0x2fd },
	{ 0x1105f, 0x2fd },
	{ 0x1115f, 0x2fd },
	{ 0x11005f, 0x2fd },
	{ 0x11015f, 0x2fd },
	{ 0x11105f, 0x2fd },
	{ 0x11115f, 0x2fd },
	{ 0x55, 0x355 },
	{ 0x1055, 0x355 },
	{ 0x2055, 0x355 },
	{ 0x3055, 0x355 },
	{ 0x4055, 0x55 },
	{ 0x5055, 0x55 },
	{ 0x6055, 0x355 },
	{ 0x7055, 0x355 },
	{ 0x8055, 0x355 },
	{ 0x9055, 0x355 },
	{ 0x200c5, 0xa },
	{ 0x1200c5, 0x6 },
	{ 0x2002e, 0x2 },
	{ 0x12002e, 0x1 },
	{ 0x20024, 0x8 },
	{ 0x2003a, 0x2 },
	{ 0x120024, 0x8 },
	{ 0x2003a, 0x2 },
	{ 0x20056, 0x6 },
	{ 0x120056, 0xa },
	{ 0x1004d, 0x1a },
	{ 0x1014d, 0x1a },
	{ 0x1104d, 0x1a },
	{ 0x1114d, 0x1a },
	{ 0x11004d, 0x1a },
	{ 0x11014d, 0x1a },
	{ 0x11104d, 0x1a },
	{ 0x11114d, 0x1a },
	{ 0x10049, 0xe38 },
	{ 0x10149, 0xe38 },
	{ 0x11049, 0xe38 },
	{ 0x11149, 0xe38 },
	{ 0x110049, 0xe38 },
	{ 0x110149, 0xe38 },
	{ 0x111049, 0xe38 },
	{ 0x111149, 0xe38 },
	{ 0x43, 0x63 },
	{ 0x1043, 0x63 },
	{ 0x2043, 0x63 },
	{ 0x3043, 0x63 },
	{ 0x4043, 0x63 },
	{ 0x5043, 0x63 },
	{ 0x6043, 0x63 },
	{ 0x7043, 0x63 },
	{ 0x8043, 0x63 },
	{ 0x9043, 0x63 },
	{ 0x20018, 0x1 },
	{ 0x20075, 0x2 },
	{ 0x20050, 0x0 },
	{ 0x20008, 0x258 },
	{ 0x120008, 0x10a },
	{ 0x20088, 0x9 },
	{ 0x200b2, 0x268 },
	{ 0x10043, 0x5b1 },
	{ 0x10143, 0x5b1 },
	{ 0x11043, 0x5b1 },
	{ 0x11143, 0x5b1 },
	{ 0x1200b2, 0x268 },
	{ 0x110043, 0x5b1 },
	{ 0x110143, 0x5b1 },
	{ 0x111043, 0x5b1 },
	{ 0x111143, 0x5b1 },
	{ 0x200fa, 0x1 },
	{ 0x1200fa, 0x1 },
	{ 0x20019, 0x5 },
	{ 0x120019, 0x5 },
	{ 0x200f0, 0x5555 },
	{ 0x200f1, 0x5555 },
	{ 0x200f2, 0x5555 },
	{ 0x200f3, 0x5555 },
	{ 0x200f4, 0x5555 },
	{ 0x200f5, 0x5555 },
	{ 0x200f6, 0x5555 },
	{ 0x200f7, 0xf000 },
	{ 0x20025, 0x0 },
	{ 0x2002d, 0x0 },
	{ 0x12002d, 0x0 },
	{ 0x2005b, 0x7529 },
	{ 0x2005c, 0x0 },
	{ 0x200c7, 0x21 },
	{ 0x200ca, 0x24 },
	{ 0x200cc, 0x1f7 },
	{ 0x1200c7, 0x21 },
	{ 0x1200ca, 0x24 },
	{ 0x1200cc, 0x1f7 },
	{ 0x2007d, 0x212 },
	{ 0x12007d, 0x212 },
	{ 0x2007c, 0x61 },
	{ 0x12007c, 0x61 },
	{ 0x1004a, 0x500 },
	{ 0x1104a, 0x500 },
	{ 0x2002c, 0x0 },
};

/* ddr phy trained csr */
struct dram_cfg_param ddr_ddrphy_trained_csr[] = {
	{0x0200b2,0x0},
	{0x1200b2,0x0},
	{0x2200b2,0x0},
	{0x0200cb,0x0},
	{0x010043,0x0},
	{0x110043,0x0},
	{0x210043,0x0},
	{0x010143,0x0},
	{0x110143,0x0},
	{0x210143,0x0},
	{0x011043,0x0},
	{0x111043,0x0},
	{0x211043,0x0},
	{0x011143,0x0},
	{0x111143,0x0},
	{0x211143,0x0},
	{0x000080,0x0},
	{0x100080,0x0},
	{0x200080,0x0},
	{0x001080,0x0},
	{0x101080,0x0},
	{0x201080,0x0},
	{0x002080,0x0},
	{0x102080,0x0},
	{0x202080,0x0},
	{0x003080,0x0},
	{0x103080,0x0},
	{0x203080,0x0},
	{0x004080,0x0},
	{0x104080,0x0},
	{0x204080,0x0},
	{0x005080,0x0},
	{0x105080,0x0},
	{0x205080,0x0},
	{0x006080,0x0},
	{0x106080,0x0},
	{0x206080,0x0},
	{0x007080,0x0},
	{0x107080,0x0},
	{0x207080,0x0},
	{0x008080,0x0},
	{0x108080,0x0},
	{0x208080,0x0},
	{0x009080,0x0},
	{0x109080,0x0},
	{0x209080,0x0},
	{0x010080,0x0},
	{0x110080,0x0},
	{0x210080,0x0},
	{0x010180,0x0},
	{0x110180,0x0},
	{0x210180,0x0},
	{0x010081,0x0},
	{0x110081,0x0},
	{0x210081,0x0},
	{0x010181,0x0},
	{0x110181,0x0},
	{0x210181,0x0},
	{0x010082,0x0},
	{0x110082,0x0},
	{0x210082,0x0},
	{0x010182,0x0},
	{0x110182,0x0},
	{0x210182,0x0},
	{0x010083,0x0},
	{0x110083,0x0},
	{0x210083,0x0},
	{0x010183,0x0},
	{0x110183,0x0},
	{0x210183,0x0},
	{0x011080,0x0},
	{0x111080,0x0},
	{0x211080,0x0},
	{0x011180,0x0},
	{0x111180,0x0},
	{0x211180,0x0},
	{0x011081,0x0},
	{0x111081,0x0},
	{0x211081,0x0},
	{0x011181,0x0},
	{0x111181,0x0},
	{0x211181,0x0},
	{0x011082,0x0},
	{0x111082,0x0},
	{0x211082,0x0},
	{0x011182,0x0},
	{0x111182,0x0},
	{0x211182,0x0},
	{0x011083,0x0},
	{0x111083,0x0},
	{0x211083,0x0},
	{0x011183,0x0},
	{0x111183,0x0},
	{0x211183,0x0},
	{0x0100d0,0x0},
	{0x1100d0,0x0},
	{0x2100d0,0x0},
	{0x0101d0,0x0},
	{0x1101d0,0x0},
	{0x2101d0,0x0},
	{0x0100d1,0x0},
	{0x1100d1,0x0},
	{0x2100d1,0x0},
	{0x0101d1,0x0},
	{0x1101d1,0x0},
	{0x2101d1,0x0},
	{0x0100d2,0x0},
	{0x1100d2,0x0},
	{0x2100d2,0x0},
	{0x0101d2,0x0},
	{0x1101d2,0x0},
	{0x2101d2,0x0},
	{0x0100d3,0x0},
	{0x1100d3,0x0},
	{0x2100d3,0x0},
	{0x0101d3,0x0},
	{0x1101d3,0x0},
	{0x2101d3,0x0},
	{0x0110d0,0x0},
	{0x1110d0,0x0},
	{0x2110d0,0x0},
	{0x0111d0,0x0},
	{0x1111d0,0x0},
	{0x2111d0,0x0},
	{0x0110d1,0x0},
	{0x1110d1,0x0},
	{0x2110d1,0x0},
	{0x0111d1,0x0},
	{0x1111d1,0x0},
	{0x2111d1,0x0},
	{0x0110d2,0x0},
	{0x1110d2,0x0},
	{0x2110d2,0x0},
	{0x0111d2,0x0},
	{0x1111d2,0x0},
	{0x2111d2,0x0},
	{0x0110d3,0x0},
	{0x1110d3,0x0},
	{0x2110d3,0x0},
	{0x0111d3,0x0},
	{0x1111d3,0x0},
	{0x2111d3,0x0},
	{0x010068,0x0},
	{0x010168,0x0},
	{0x010268,0x0},
	{0x010368,0x0},
	{0x010468,0x0},
	{0x010568,0x0},
	{0x010668,0x0},
	{0x010768,0x0},
	{0x010868,0x0},
	{0x010069,0x0},
	{0x010169,0x0},
	{0x010269,0x0},
	{0x010369,0x0},
	{0x010469,0x0},
	{0x010569,0x0},
	{0x010669,0x0},
	{0x010769,0x0},
	{0x010869,0x0},
	{0x01006a,0x0},
	{0x01016a,0x0},
	{0x01026a,0x0},
	{0x01036a,0x0},
	{0x01046a,0x0},
	{0x01056a,0x0},
	{0x01066a,0x0},
	{0x01076a,0x0},
	{0x01086a,0x0},
	{0x01006b,0x0},
	{0x01016b,0x0},
	{0x01026b,0x0},
	{0x01036b,0x0},
	{0x01046b,0x0},
	{0x01056b,0x0},
	{0x01066b,0x0},
	{0x01076b,0x0},
	{0x01086b,0x0},
	{0x011068,0x0},
	{0x011168,0x0},
	{0x011268,0x0},
	{0x011368,0x0},
	{0x011468,0x0},
	{0x011568,0x0},
	{0x011668,0x0},
	{0x011768,0x0},
	{0x011868,0x0},
	{0x011069,0x0},
	{0x011169,0x0},
	{0x011269,0x0},
	{0x011369,0x0},
	{0x011469,0x0},
	{0x011569,0x0},
	{0x011669,0x0},
	{0x011769,0x0},
	{0x011869,0x0},
	{0x01106a,0x0},
	{0x01116a,0x0},
	{0x01126a,0x0},
	{0x01136a,0x0},
	{0x01146a,0x0},
	{0x01156a,0x0},
	{0x01166a,0x0},
	{0x01176a,0x0},
	{0x01186a,0x0},
	{0x01106b,0x0},
	{0x01116b,0x0},
	{0x01126b,0x0},
	{0x01136b,0x0},
	{0x01146b,0x0},
	{0x01156b,0x0},
	{0x01166b,0x0},
	{0x01176b,0x0},
	{0x01186b,0x0},
	{0x01008c,0x0},
	{0x11008c,0x0},
	{0x21008c,0x0},
	{0x01018c,0x0},
	{0x11018c,0x0},
	{0x21018c,0x0},
	{0x01008d,0x0},
	{0x11008d,0x0},
	{0x21008d,0x0},
	{0x01018d,0x0},
	{0x11018d,0x0},
	{0x21018d,0x0},
	{0x01008e,0x0},
	{0x11008e,0x0},
	{0x21008e,0x0},
	{0x01018e,0x0},
	{0x11018e,0x0},
	{0x21018e,0x0},
	{0x01008f,0x0},
	{0x11008f,0x0},
	{0x21008f,0x0},
	{0x01018f,0x0},
	{0x11018f,0x0},
	{0x21018f,0x0},
	{0x01108c,0x0},
	{0x11108c,0x0},
	{0x21108c,0x0},
	{0x01118c,0x0},
	{0x11118c,0x0},
	{0x21118c,0x0},
	{0x01108d,0x0},
	{0x11108d,0x0},
	{0x21108d,0x0},
	{0x01118d,0x0},
	{0x11118d,0x0},
	{0x21118d,0x0},
	{0x01108e,0x0},
	{0x11108e,0x0},
	{0x21108e,0x0},
	{0x01118e,0x0},
	{0x11118e,0x0},
	{0x21118e,0x0},
	{0x01108f,0x0},
	{0x11108f,0x0},
	{0x21108f,0x0},
	{0x01118f,0x0},
	{0x11118f,0x0},
	{0x21118f,0x0},
	{0x0100c0,0x0},
	{0x1100c0,0x0},
	{0x2100c0,0x0},
	{0x0101c0,0x0},
	{0x1101c0,0x0},
	{0x2101c0,0x0},
	{0x0102c0,0x0},
	{0x1102c0,0x0},
	{0x2102c0,0x0},
	{0x0103c0,0x0},
	{0x1103c0,0x0},
	{0x2103c0,0x0},
	{0x0104c0,0x0},
	{0x1104c0,0x0},
	{0x2104c0,0x0},
	{0x0105c0,0x0},
	{0x1105c0,0x0},
	{0x2105c0,0x0},
	{0x0106c0,0x0},
	{0x1106c0,0x0},
	{0x2106c0,0x0},
	{0x0107c0,0x0},
	{0x1107c0,0x0},
	{0x2107c0,0x0},
	{0x0108c0,0x0},
	{0x1108c0,0x0},
	{0x2108c0,0x0},
	{0x0100c1,0x0},
	{0x1100c1,0x0},
	{0x2100c1,0x0},
	{0x0101c1,0x0},
	{0x1101c1,0x0},
	{0x2101c1,0x0},
	{0x0102c1,0x0},
	{0x1102c1,0x0},
	{0x2102c1,0x0},
	{0x0103c1,0x0},
	{0x1103c1,0x0},
	{0x2103c1,0x0},
	{0x0104c1,0x0},
	{0x1104c1,0x0},
	{0x2104c1,0x0},
	{0x0105c1,0x0},
	{0x1105c1,0x0},
	{0x2105c1,0x0},
	{0x0106c1,0x0},
	{0x1106c1,0x0},
	{0x2106c1,0x0},
	{0x0107c1,0x0},
	{0x1107c1,0x0},
	{0x2107c1,0x0},
	{0x0108c1,0x0},
	{0x1108c1,0x0},
	{0x2108c1,0x0},
	{0x0100c2,0x0},
	{0x1100c2,0x0},
	{0x2100c2,0x0},
	{0x0101c2,0x0},
	{0x1101c2,0x0},
	{0x2101c2,0x0},
	{0x0102c2,0x0},
	{0x1102c2,0x0},
	{0x2102c2,0x0},
	{0x0103c2,0x0},
	{0x1103c2,0x0},
	{0x2103c2,0x0},
	{0x0104c2,0x0},
	{0x1104c2,0x0},
	{0x2104c2,0x0},
	{0x0105c2,0x0},
	{0x1105c2,0x0},
	{0x2105c2,0x0},
	{0x0106c2,0x0},
	{0x1106c2,0x0},
	{0x2106c2,0x0},
	{0x0107c2,0x0},
	{0x1107c2,0x0},
	{0x2107c2,0x0},
	{0x0108c2,0x0},
	{0x1108c2,0x0},
	{0x2108c2,0x0},
	{0x0100c3,0x0},
	{0x1100c3,0x0},
	{0x2100c3,0x0},
	{0x0101c3,0x0},
	{0x1101c3,0x0},
	{0x2101c3,0x0},
	{0x0102c3,0x0},
	{0x1102c3,0x0},
	{0x2102c3,0x0},
	{0x0103c3,0x0},
	{0x1103c3,0x0},
	{0x2103c3,0x0},
	{0x0104c3,0x0},
	{0x1104c3,0x0},
	{0x2104c3,0x0},
	{0x0105c3,0x0},
	{0x1105c3,0x0},
	{0x2105c3,0x0},
	{0x0106c3,0x0},
	{0x1106c3,0x0},
	{0x2106c3,0x0},
	{0x0107c3,0x0},
	{0x1107c3,0x0},
	{0x2107c3,0x0},
	{0x0108c3,0x0},
	{0x1108c3,0x0},
	{0x2108c3,0x0},
	{0x0110c0,0x0},
	{0x1110c0,0x0},
	{0x2110c0,0x0},
	{0x0111c0,0x0},
	{0x1111c0,0x0},
	{0x2111c0,0x0},
	{0x0112c0,0x0},
	{0x1112c0,0x0},
	{0x2112c0,0x0},
	{0x0113c0,0x0},
	{0x1113c0,0x0},
	{0x2113c0,0x0},
	{0x0114c0,0x0},
	{0x1114c0,0x0},
	{0x2114c0,0x0},
	{0x0115c0,0x0},
	{0x1115c0,0x0},
	{0x2115c0,0x0},
	{0x0116c0,0x0},
	{0x1116c0,0x0},
	{0x2116c0,0x0},
	{0x0117c0,0x0},
	{0x1117c0,0x0},
	{0x2117c0,0x0},
	{0x0118c0,0x0},
	{0x1118c0,0x0},
	{0x2118c0,0x0},
	{0x0110c1,0x0},
	{0x1110c1,0x0},
	{0x2110c1,0x0},
	{0x0111c1,0x0},
	{0x1111c1,0x0},
	{0x2111c1,0x0},
	{0x0112c1,0x0},
	{0x1112c1,0x0},
	{0x2112c1,0x0},
	{0x0113c1,0x0},
	{0x1113c1,0x0},
	{0x2113c1,0x0},
	{0x0114c1,0x0},
	{0x1114c1,0x0},
	{0x2114c1,0x0},
	{0x0115c1,0x0},
	{0x1115c1,0x0},
	{0x2115c1,0x0},
	{0x0116c1,0x0},
	{0x1116c1,0x0},
	{0x2116c1,0x0},
	{0x0117c1,0x0},
	{0x1117c1,0x0},
	{0x2117c1,0x0},
	{0x0118c1,0x0},
	{0x1118c1,0x0},
	{0x2118c1,0x0},
	{0x0110c2,0x0},
	{0x1110c2,0x0},
	{0x2110c2,0x0},
	{0x0111c2,0x0},
	{0x1111c2,0x0},
	{0x2111c2,0x0},
	{0x0112c2,0x0},
	{0x1112c2,0x0},
	{0x2112c2,0x0},
	{0x0113c2,0x0},
	{0x1113c2,0x0},
	{0x2113c2,0x0},
	{0x0114c2,0x0},
	{0x1114c2,0x0},
	{0x2114c2,0x0},
	{0x0115c2,0x0},
	{0x1115c2,0x0},
	{0x2115c2,0x0},
	{0x0116c2,0x0},
	{0x1116c2,0x0},
	{0x2116c2,0x0},
	{0x0117c2,0x0},
	{0x1117c2,0x0},
	{0x2117c2,0x0},
	{0x0118c2,0x0},
	{0x1118c2,0x0},
	{0x2118c2,0x0},
	{0x0110c3,0x0},
	{0x1110c3,0x0},
	{0x2110c3,0x0},
	{0x0111c3,0x0},
	{0x1111c3,0x0},
	{0x2111c3,0x0},
	{0x0112c3,0x0},
	{0x1112c3,0x0},
	{0x2112c3,0x0},
	{0x0113c3,0x0},
	{0x1113c3,0x0},
	{0x2113c3,0x0},
	{0x0114c3,0x0},
	{0x1114c3,0x0},
	{0x2114c3,0x0},
	{0x0115c3,0x0},
	{0x1115c3,0x0},
	{0x2115c3,0x0},
	{0x0116c3,0x0},
	{0x1116c3,0x0},
	{0x2116c3,0x0},
	{0x0117c3,0x0},
	{0x1117c3,0x0},
	{0x2117c3,0x0},
	{0x0118c3,0x0},
	{0x1118c3,0x0},
	{0x2118c3,0x0},
	{0x010020,0x0},
	{0x110020,0x0},
	{0x210020,0x0},
	{0x011020,0x0},
	{0x111020,0x0},
	{0x211020,0x0},
	{0x02007d,0x0},
	{0x12007d,0x0},
	{0x22007d,0x0},
	{0x010040,0x0},
	{0x010140,0x0},
	{0x010240,0x0},
	{0x010340,0x0},
	{0x010440,0x0},
	{0x010540,0x0},
	{0x010640,0x0},
	{0x010740,0x0},
	{0x010840,0x0},
	{0x010030,0x0},
	{0x010130,0x0},
	{0x010230,0x0},
	{0x010330,0x0},
	{0x010430,0x0},
	{0x010530,0x0},
	{0x010630,0x0},
	{0x010730,0x0},
	{0x010830,0x0},
	{0x011040,0x0},
	{0x011140,0x0},
	{0x011240,0x0},
	{0x011340,0x0},
	{0x011440,0x0},
	{0x011540,0x0},
	{0x011640,0x0},
	{0x011740,0x0},
	{0x011840,0x0},
	{0x011030,0x0},
	{0x011130,0x0},
	{0x011230,0x0},
	{0x011330,0x0},
	{0x011430,0x0},
	{0x011530,0x0},
	{0x011630,0x0},
	{0x011730,0x0},
	{0x011830,0x0},
};

/* P0 message block paremeter for training firmware */
struct dram_cfg_param ddr_fsp0_cfg[] = {
	{ 0xd0000, 0x0 },
	{ 0x54003, 0x960 },
	{ 0x54004, 0x2 },
	{ 0x54005, 0x2830 },
	{ 0x54006, 0x25e },
	{ 0x54007, 0x1000 },
	{ 0x54008, 0x101 },
	{ 0x5400b, 0x31f },
	{ 0x5400c, 0xc8 },
	{ 0x5400d, 0x100 },
	{ 0x54012, 0x1 },
	{ 0x5402f, 0x834 },
	{ 0x54030, 0x105 },
	{ 0x54031, 0x18 },
	{ 0x54032, 0x200 },
	{ 0x54033, 0x200 },
	{ 0x54034, 0x600 },
	{ 0x54035, 0x810 },
	{ 0x54036, 0x101 },
	{ 0x5403f, 0x1221 },
	{ 0x541fc, 0x100 },
	{ 0xd0000, 0x1 },
};


/* P1 message block paremeter for training firmware */
struct dram_cfg_param ddr_fsp1_cfg[] = {
	{ 0xd0000, 0x0 },
	{ 0x54002, 0x1 },
	{ 0x54003, 0x42a },
	{ 0x54004, 0x2 },
	{ 0x54005, 0x2830 },
	{ 0x54006, 0x25e },
	{ 0x54007, 0x1000 },
	{ 0x54008, 0x101 },
	{ 0x5400b, 0x21f },
	{ 0x5400c, 0xc8 },
	{ 0x5400d, 0x100 },
	{ 0x54012, 0x1 },
	{ 0x5402f, 0x4 },
	{ 0x54030, 0x105 },
	{ 0x54033, 0x200 },
	{ 0x54034, 0x600 },
	{ 0x54035, 0x10 },
	{ 0x54036, 0x101 },
	{ 0x5403f, 0x1221 },
	{ 0x541fc, 0x100 },
	{ 0xd0000, 0x1 },
};


/* P0 2D message block paremeter for training firmware */
struct dram_cfg_param ddr_fsp0_2d_cfg[] = {
	{ 0xd0000, 0x0 },
	{ 0x54003, 0x960 },
	{ 0x54004, 0x2 },
	{ 0x54005, 0x2830 },
	{ 0x54006, 0x25e },
	{ 0x54007, 0x1000 },
	{ 0x54008, 0x101 },
	{ 0x5400b, 0x61 },
	{ 0x5400c, 0xc8 },
	{ 0x5400d, 0x100 },
	{ 0x5400e, 0x1f7f },
	{ 0x54012, 0x1 },
	{ 0x5402f, 0x834 },
	{ 0x54030, 0x105 },
	{ 0x54031, 0x18 },
	{ 0x54032, 0x200 },
	{ 0x54033, 0x200 },
	{ 0x54034, 0x600 },
	{ 0x54035, 0x810 },
	{ 0x54036, 0x101 },
	{ 0x5403f, 0x1221 },
	{ 0x541fc, 0x100 },
	{ 0xd0000, 0x1 },
};

/* DRAM PHY init engine image */
struct dram_cfg_param ddr_phy_pie[] = {
	{ 0xd0000, 0x0 },
	{ 0x90000, 0x10 },
	{ 0x90001, 0x400 },
	{ 0x90002, 0x10e },
	{ 0x90003, 0x0 },
	{ 0x90004, 0x0 },
	{ 0x90005, 0x8 },
	{ 0x90029, 0xb },
	{ 0x9002a, 0x480 },
	{ 0x9002b, 0x109 },
	{ 0x9002c, 0x8 },
	{ 0x9002d, 0x448 },
	{ 0x9002e, 0x139 },
	{ 0x9002f, 0x8 },
	{ 0x90030, 0x478 },
	{ 0x90031, 0x109 },
	{ 0x90032, 0x2 },
	{ 0x90033, 0x10 },
	{ 0x90034, 0x139 },
	{ 0x90035, 0xb },
	{ 0x90036, 0x7c0 },
	{ 0x90037, 0x139 },
	{ 0x90038, 0x44 },
	{ 0x90039, 0x633 },
	{ 0x9003a, 0x159 },
	{ 0x9003b, 0x14f },
	{ 0x9003c, 0x630 },
	{ 0x9003d, 0x159 },
	{ 0x9003e, 0x47 },
	{ 0x9003f, 0x633 },
	{ 0x90040, 0x149 },
	{ 0x90041, 0x4f },
	{ 0x90042, 0x633 },
	{ 0x90043, 0x179 },
	{ 0x90044, 0x8 },
	{ 0x90045, 0xe0 },
	{ 0x90046, 0x109 },
	{ 0x90047, 0x0 },
	{ 0x90048, 0x7c8 },
	{ 0x90049, 0x109 },
	{ 0x9004a, 0x0 },
	{ 0x9004b, 0x1 },
	{ 0x9004c, 0x8 },
	{ 0x9004d, 0x0 },
	{ 0x9004e, 0x45a },
	{ 0x9004f, 0x9 },
	{ 0x90050, 0x0 },
	{ 0x90051, 0x448 },
	{ 0x90052, 0x109 },
	{ 0x90053, 0x40 },
	{ 0x90054, 0x633 },
	{ 0x90055, 0x179 },
	{ 0x90056, 0x1 },
	{ 0x90057, 0x618 },
	{ 0x90058, 0x109 },
	{ 0x90059, 0x40c0 },
	{ 0x9005a, 0x633 },
	{ 0x9005b, 0x149 },
	{ 0x9005c, 0x8 },
	{ 0x9005d, 0x4 },
	{ 0x9005e, 0x48 },
	{ 0x9005f, 0x4040 },
	{ 0x90060, 0x633 },
	{ 0x90061, 0x149 },
	{ 0x90062, 0x0 },
	{ 0x90063, 0x4 },
	{ 0x90064, 0x48 },
	{ 0x90065, 0x40 },
	{ 0x90066, 0x633 },
	{ 0x90067, 0x149 },
	{ 0x90068, 0x10 },
	{ 0x90069, 0x4 },
	{ 0x9006a, 0x18 },
	{ 0x9006b, 0x0 },
	{ 0x9006c, 0x4 },
	{ 0x9006d, 0x78 },
	{ 0x9006e, 0x549 },
	{ 0x9006f, 0x633 },
	{ 0x90070, 0x159 },
	{ 0x90071, 0xd49 },
	{ 0x90072, 0x633 },
	{ 0x90073, 0x159 },
	{ 0x90074, 0x94a },
	{ 0x90075, 0x633 },
	{ 0x90076, 0x159 },
	{ 0x90077, 0x441 },
	{ 0x90078, 0x633 },
	{ 0x90079, 0x149 },
	{ 0x9007a, 0x42 },
	{ 0x9007b, 0x633 },
	{ 0x9007c, 0x149 },
	{ 0x9007d, 0x1 },
	{ 0x9007e, 0x633 },
	{ 0x9007f, 0x149 },
	{ 0x90080, 0x0 },
	{ 0x90081, 0xe0 },
	{ 0x90082, 0x109 },
	{ 0x90083, 0xa },
	{ 0x90084, 0x10 },
	{ 0x90085, 0x109 },
	{ 0x90086, 0x9 },
	{ 0x90087, 0x3c0 },
	{ 0x90088, 0x149 },
	{ 0x90089, 0x9 },
	{ 0x9008a, 0x3c0 },
	{ 0x9008b, 0x159 },
	{ 0x9008c, 0x18 },
	{ 0x9008d, 0x10 },
	{ 0x9008e, 0x109 },
	{ 0x9008f, 0x0 },
	{ 0x90090, 0x3c0 },
	{ 0x90091, 0x109 },
	{ 0x90092, 0x18 },
	{ 0x90093, 0x4 },
	{ 0x90094, 0x48 },
	{ 0x90095, 0x18 },
	{ 0x90096, 0x4 },
	{ 0x90097, 0x58 },
	{ 0x90098, 0xb },
	{ 0x90099, 0x10 },
	{ 0x9009a, 0x109 },
	{ 0x9009b, 0x1 },
	{ 0x9009c, 0x10 },
	{ 0x9009d, 0x109 },
	{ 0x9009e, 0x5 },
	{ 0x9009f, 0x7c0 },
	{ 0x900a0, 0x109 },
	{ 0x900a1, 0x0 },
	{ 0x900a2, 0x8140 },
	{ 0x900a3, 0x10c },
	{ 0x900a4, 0x10 },
	{ 0x900a5, 0x8138 },
	{ 0x900a6, 0x10c },
	{ 0x900a7, 0x8 },
	{ 0x900a8, 0x7c8 },
	{ 0x900a9, 0x101 },
	{ 0x900aa, 0x8 },
	{ 0x900ab, 0x448 },
	{ 0x900ac, 0x109 },
	{ 0x900ad, 0xf },
	{ 0x900ae, 0x7c0 },
	{ 0x900af, 0x109 },
	{ 0x900b0, 0x47 },
	{ 0x900b1, 0x630 },
	{ 0x900b2, 0x109 },
	{ 0x900b3, 0x8 },
	{ 0x900b4, 0x618 },
	{ 0x900b5, 0x109 },
	{ 0x900b6, 0x8 },
	{ 0x900b7, 0xe0 },
	{ 0x900b8, 0x109 },
	{ 0x900b9, 0x0 },
	{ 0x900ba, 0x7c8 },
	{ 0x900bb, 0x109 },
	{ 0x900bc, 0x8 },
	{ 0x900bd, 0x8140 },
	{ 0x900be, 0x10c },
	{ 0x900bf, 0x0 },
	{ 0x900c0, 0x1 },
	{ 0x900c1, 0x8 },
	{ 0x900c2, 0x8 },
	{ 0x900c3, 0x4 },
	{ 0x900c4, 0x8 },
	{ 0x900c5, 0x8 },
	{ 0x900c6, 0x7c8 },
	{ 0x900c7, 0x101 },
	{ 0x90006, 0x0 },
	{ 0x90007, 0x0 },
	{ 0x90008, 0x8 },
	{ 0x90009, 0x0 },
	{ 0x9000a, 0x0 },
	{ 0x9000b, 0x0 },
	{ 0xd00e7, 0x400 },
	{ 0x90017, 0x0 },
	{ 0x90026, 0x2b },
	{ 0x2000b, 0x4b },
	{ 0x2000c, 0x96 },
	{ 0x2000d, 0x5dc },
	{ 0x2000e, 0x2c },
	{ 0x12000b, 0x21 },
	{ 0x12000c, 0x42 },
	{ 0x12000d, 0x29a },
	{ 0x12000e, 0x21 },
	{ 0x9000c, 0x0 },
	{ 0x9000d, 0x173 },
	{ 0x9000e, 0x60 },
	{ 0x9000f, 0x6110 },
	{ 0x90010, 0x2152 },
	{ 0x90011, 0xdfbd },
	{ 0x90012, 0xffff },
	{ 0x90013, 0x6152 },
	{ 0x20089, 0x1 },
	{ 0x20088, 0x19 },
	{ 0xc0080, 0x0 },
	{ 0xd0000, 0x1 }
};

struct dram_fsp_msg ddr_dram_fsp_msg[] = {
	{
		/* P0 2400mts 1D */
		.drate = 2400,
		.fw_type = FW_1D_IMAGE,
		.fsp_cfg = ddr_fsp0_cfg,
		.fsp_cfg_num = ARRAY_SIZE(ddr_fsp0_cfg),
	},
	{
		/* P1 1066mts 1D */
		.drate = 1066,
		.fw_type = FW_1D_IMAGE,
		.fsp_cfg = ddr_fsp1_cfg,
		.fsp_cfg_num = ARRAY_SIZE(ddr_fsp1_cfg),
	},
	{
		/* P0 2400mts 2D */
		.drate = 2400,
		.fw_type = FW_2D_IMAGE,
		.fsp_cfg = ddr_fsp0_2d_cfg,
		.fsp_cfg_num = ARRAY_SIZE(ddr_fsp0_2d_cfg),
	},
};

/* ddr timing config params */
struct dram_timing_info dram_timing = {
	.ddrc_cfg = ddr_ddrc_cfg,
	.ddrc_cfg_num = ARRAY_SIZE(ddr_ddrc_cfg),
	.ddrphy_cfg = ddr_ddrphy_cfg,
	.ddrphy_cfg_num = ARRAY_SIZE(ddr_ddrphy_cfg),
	.fsp_msg = ddr_dram_fsp_msg,
	.fsp_msg_num = ARRAY_SIZE(ddr_dram_fsp_msg),
	.ddrphy_trained_csr = ddr_ddrphy_trained_csr,
	.ddrphy_trained_csr_num = ARRAY_SIZE(ddr_ddrphy_trained_csr),
	.ddrphy_pie = ddr_phy_pie,
	.ddrphy_pie_num = ARRAY_SIZE(ddr_phy_pie),
	.fsp_table = { 2400, 1066, },
};

