/*
 *
 * NoC. (NoC Mntn Module.)
 *
 * Copyright (c) 2012-2020 Huawei Technologies Co., Ltd.
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
#ifndef __DFX_NOC_PACKET
#define __DFX_NOC_PACKET

#include "dfx_noc.h"

#define PACKET_CFGCTL_INIT_VALUE       0
#define PACKET_MAINCTL_INIT_VALUE      3
#define PACKET_MAINCTL_SET_VALUE       4
#define PACKET_MAINCTL_SET_EN_VALUE    3

#define PACKET_ENABLE                  0x0
#define PACKET_ENABLE_ALARM_INT        0x4
#define PACKET_ENABLE_PROBE            0x0
#define PACKET_OVERFLOWSTATUS_VALUE    0x1
#define PACKET_STATALARMCLR_VALUE      0x1

#define PACKET_CFG_STATAALARMMAX         0xF
#define PACKET_CFG_PACKET_FILTERLUT      0xE
#define PACKET_CFG_PACKET_F0_ADDRBASE    0x0
#define PACKET_CFG_PACKET_F0_WINSIZE     0x20
#define PACKET_CFG_PACKET_F0_SECMASK     0x0
#define PACKET_CFG_PACKET_F0_OPCODE      0xF
#define PACKET_CFG_PACKET_F0_STATUS      0x3
#define PACKET_CFG_PACKET_F0_LENGTH      0x8
#define PACKET_CFG_PACKET_F0_URGENCY     0x0
#define PACKET_CFG_PACKET_F0_USERMASK    0x0
#define PACKET_CFG_STATPERIOD            0x8
#define PACKET_CFG_PACKET_F0_ROUTEIDBASE 0x600
#define PACKET_CFG_PACKET_F0_ROUTEIDMASK 0xFC0
#define PACKET_CFG_PACKET_F1_ROUTEIDBASE 0x400
#define PACKET_CFG_PACKET_F1_ROUTEIDMASK 0xFC0
#define PACKET_CFG_PACKET_COUTNERS_0_SRC 0x12

#define PACKET_CFG_PACKET_F1_ADDRBASE    0x0
#define PACKET_CFG_PACKET_F1_WINSIZE     0x20
#define PACKET_CFG_PACKET_F1_SECMASK     0x0
#define PACKET_CFG_PACKET_F1_OPCODE      0xF
#define PACKET_CFG_PACKET_F1_STATUS      0x3
#define PACKET_CFG_PACKET_F1_LENGTH      0x8
#define PACKET_CFG_PACKET_F1_URGENCY     0x0
#define PACKET_CFG_PACKET_F1_USERMASK    0x0

#define PACKET_CFG_PACKET_COUNTERS_1_SRC 0x10
#define PACKET_CFG_PACKET_COUNTERS_0_ALARMMODE 0x2
#define PACKET_CFG_PACKET_COUNTERS_1_ALARMMODE 0x0

/* (0x2008-0x2000)(SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_MAINCTL_ADDR(0)-PACKET_BASE) */
#define PACKET_MAINCTL                 0x0008
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_CFGCTL_ADDR(0)-PACKET_BASE) */
#define PACKET_CFGCTL                  0x000c
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_FILTERLUT_ADDR(0)-PACKET_BASE) */
#define PACKET_FILTERLUT               0x0014
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_STATPERIOD_ADDR(0)-PACKET_BASE) */
#define PACKET_STATPERIOD              0x0024
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_STATALARMMAX_ADDR(0)-PACKET_BASE) */
#define PACKET_STATALARMMAX            0x0030
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_STATALARMCLR_ADDR(0)-PACKET_BASE) */
#define PACKET_STATALARMCLR            0x0038

/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_ROUTEIDBASE_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_ROUTEIDBASE          0x0044
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_ROUTEIDMASK_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_ROUTEIDMASK          0x0048
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_ADDRBASE_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_ADDRBASE             0x004c
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_WINDOWSIZE_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_WINDOWSIZE           0x0054
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_SECURITYBASE_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_SECURITYBASE         0x0058
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_SECURITYMASK_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_SECURITYMASK         0x005c
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_OPCODE_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_OPCODE               0x0060
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_STATUS_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_STATUS               0x0064
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_LENGTH_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_LENGTH               0x0068
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_URGENCY_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_URGENCY              0x006c
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_USERBASE_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_USERBASE             0x0070
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_F0_USERMASK_ADDR(0)-PACKET_BASE) */
#define PACKET_F0_USERMASK             0x0074

#define PACKET_F1_ROUTEIDBASE          0x0080
#define PACKET_F1_ROUTEIDMASK          0x0084
#define PACKET_F1_ADDRBASE             0x0088
#define PACKET_F1_WINDOWSIZE           0x0090
#define PACKET_F1_SECURITYMASK         0x0098
#define PACKET_F1_OPCODE               0x009C
#define PACKET_F1_STATUS               0x00A0
#define PACKET_F1_LENGTH               0x00A4
#define PACKET_F1_URGENCY              0x00A8
#define PACKET_F1_USERMASK             0x00B0

/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_COUNTERS_0_SRC_ADDR(0)-PACKET_BASE) */
#define PACKET_COUNTERS_0_SRC          0x0138
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_COUNTERS_0_ALARMMODE_ADDR(0)-PACKET_BASE) */
#define PACKET_COUNTERS_0_ALARMMODE    0x013c
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_COUNTERS_0_VAL_ADDR(0)-PACKET_BASE) */
#define PACKET_COUNTERS_0_VAL          0x0140

/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_COUNTERS_1_SRC_ADDR(0)-PACKET_BASE) */
#define PACKET_COUNTERS_1_SRC          0x014c
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_COUNTERS_1_ALARMMODE_ADDR(0)-PACKET_BASE) */
#define PACKET_COUNTERS_1_ALARMMODE    0x0150
/* (SOC_CFG_SYS_NOC_BUS_SYSBUS_DDRC_PACKET_COUNTERS_1_VAL_ADDR(0)-PACKET_BASE) */
#define PACKET_COUNTERS_1_VAL          0x0154

#define PACKET_COUNTERS_2_SRC          0x0160
#define PACKET_COUNTERS_2_ALARMMODE    0x0164
#define PACKET_COUNTERS_2_VAL          0x0168

#define PACKET_COUNTERS_3_SRC          0x0174
#define PACKET_COUNTERS_3_ALARMMODE    0x0178
#define PACKET_COUNTERS_3_VAL          0x017c

#define PACKET_STARTGO                 0x0028

void enable_packet_probe_by_name(const char *name);
void disable_packet_probe_by_name(const char *name);
void config_packet_probe(const char *name, const struct packet_configration *packet_cfg);

void noc_packet_probe_hanlder(const struct noc_node *node, void __iomem *base);
void enable_packet_probe(const struct noc_node *node, void __iomem *base);
void disable_packet_probe(void __iomem *base);
void noc_set_bit(void __iomem *base, unsigned int offset, unsigned int bit);
void noc_clear_bit(void __iomem *base, unsigned int offset, unsigned int bit);
void init_packet_info(struct noc_node *node);

#endif
