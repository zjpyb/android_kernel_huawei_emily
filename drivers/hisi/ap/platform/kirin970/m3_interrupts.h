#ifndef __KIRIN970_M3_INTERRUPTS_H__
#define __KIRIN970_M3_INTERRUPTS_H__ 
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
#define IRQ_MAIA_PMU 0
#define IRQ_PSAM_INTR0 1
#define IRQ_PSAM_INTR1 2
#define IRQ_A53_PMU 3
#define IRQ_RESERVED4 4
#define IRQ_MDM_TLDSP_WDT 5
#define IRQ_MDM_CDSP_WDT 6
#define IRQ_PMUI2C0 7
#define IRQ_APWDOG 8
#define IRQ_WATCHDOG1 9
#define IRQ_RTC0 10
#define IRQ_RTC1 11
#define IRQ_TIME00 12
#define IRQ_TIME01 13
#define IRQ_TIME10 14
#define IRQ_TIME11 15
#define IRQ_TIME20 16
#define IRQ_TIME21 17
#define IRQ_TIME30 18
#define IRQ_TIME31 19
#define IRQ_TIME40 20
#define IRQ_TIME41 21
#define IRQ_TIME50 22
#define IRQ_TIME51 23
#define IRQ_TIME60 24
#define IRQ_TIME61 25
#define IRQ_TIME70 26
#define IRQ_TIME71 27
#define IRQ_TIME80 28
#define IRQ_TIME81 29
#define IRQ_INTR_HISEE_ALARM0 30
#define IRQ_INTR_HISEE_ALARM1 31
#define IRQ_INTR_HISEE_AS2AP_IRQ 32
#define IRQ_INTR_HISEE_DS2AP_IRQ 33
#define IRQ_INTR_HISEE_SENC2AP_IRQ0 34
#define IRQ_INTR_HISEE_SENC2AP_IRQ1 35
#define IRQ_INTR_HISEE_IPC_MBX_LPMCU0 36
#define IRQ_INTR_HISEE_IPC_MBX_LPMCU1 37
#define IRQ_UART0 38
#define IRQ_GPIO0_SE_INTR2 39
#define IRQ_GPIO1_SE_INTR2 40
#define IRQ_GPIO28_INTR2 41
#define IRQ_UART5 42
#define IRQ_UART6 43
#define IRQ_INTR_UCE0_IPC0 44
#define IRQ_INTR_UCE0_IPC1 45
#define IRQ_INTR_UCE0_IPC0_MBX 46
#define IRQ_INTR_UCE0_IPC1_MBX 47
#define IRQ_INTR_UCE1_IPC0 48
#define IRQ_INTR_UCE1_IPC1 49
#define IRQ_INTR_UCE1_IPC0_MBX 50
#define IRQ_INTR_UCE1_IPC1_MBX 51
#define IRQ_INTR_UCE2_IPC0 52
#define IRQ_INTR_UCE2_IPC1 53
#define IRQ_INTR_UCE2_IPC0_MBX 54
#define IRQ_INTR_UCE2_IPC1_MBX 55
#define IRQ_INTR_UCE3_IPC0 56
#define IRQ_INTR_UCE3_IPC1 57
#define IRQ_INTR_UCE3_IPC0_MBX 58
#define IRQ_INTR_UCE3_IPC1_MBX 59
#define IRQ_INTR_UCE_WDOG 60
#define IRQ_DDRC_INBAND_ECC_ERR_INT 61
#define IRQ_INTR_DDRC_ERR 62
#define IRQ_INTR_DDRCPHY 63
#define IRQ_INTR_UC_RTACTIVE0 64
#define IRQ_INTR_UC_RTACTIVE1 65
#define IRQ_INTR_UC_RTACTIVE2 66
#define IRQ_INTR_UC_RTACTIVE3 67
#define IRQ_INTR_QOSBUF 68
#define IRQ_DDRC_FATAL 69
#define IRQ_GPIO22_INTR2 70
#define IRQ_GPIO23 71
#define IRQ_GPIO24 72
#define IRQ_GPIO25 73
#define IRQ_GPIO26 74
#define IRQ_GPIO27_INTR2 75
#define IRQ_MDM_WDOG_INTR 76
#define IRQ_IOMCU_WD 77
#define IRQ_IOMCU_WAKEUP 78
#define IRQ_MDM_IPCM_GIC_COMBO 79
#define IRQ_INTR01_MDM_IPCM_CCPU_S 80
#define IRQ_INTR0_MDM_IPCM_LPMCU_S 81
#define IRQ_MDM_DFC_INT2 82
#define IRQ_MCPU_HIFI 83
#define IRQ_INTR01_MDM_IPCM_DFC_CDSP_S 84
#define IRQ_INTR1_MDM_IPCM_LPMCU_S 85
#define IRQ_INTR_HISEE_LOCKUP 86
#define IRQ_INTR_HISEE_DMA 87
#define IRQ_RESERVED88 88
#define IRQ_INTR_HISEE_TSENSOR0 89
#define IRQ_INTR_HISEE_TSENSOR1 90
#define IRQ_INTR_HISEE_WDOG 91
#define IRQ_RESERVED92 92
#define IRQ_INTR0_LPMCU_MDM_IPCM2 93
#define IRQ_INTR1_LPMCU_MDM_IPCM2 94
#define IRQ_PERF_STAT 95
#define IRQ_ISP_A7_TO_MCU_MBX_INT0 96
#define IRQ_ISP_A7_TO_MCU_MBX_INT1 97
#define IRQ_ISP_A7_TO_MCU_IPC_INT 98
#define IRQ_ISP_A7_WATCHDOG 99
#define IRQ_NOC_COMB 100
#define IRQ_INTR_DMSS 101
#define IRQ_INTR_DMSS_NORMAL 102
#define IRQ_RESERVED103 103
#define IRQ_PMCTRL 104
#define IRQ_UFS_INTR 105
#define IRQ_INTR_SPMI 106
#define IRQ_UFS_SC_TIMEOUT_INT 107
#define IRQ_SECENG_P 108
#define IRQ_SECENG_S 109
#define IRQ_SDIO_EMMC 110
#define IRQ_INTR_PCIE_LINK_DOWN 111
#define IRQ_INTR_PCIE_PM 112
#define IRQ_RESERVED114 114
#define IRQ_PERI_DMAC_INT2 115
#define IRQ_PERI_DMAC_NS_INT2 116
#define IRQ_PIMON 117
#define IRQ_TSENSOR_MAIA 118
#define IRQ_TSENSOR_A53 119
#define IRQ_TSENSOR_G3D 120
#define IRQ_TSENSOR_MODEM 121
#define IRQ_ASP_ARM_SECURE 122
#define IRQ_ASP_ARM 123
#define IRQ_CLUSTER0_PWR 124
#define IRQ_CLUSTER1_PWR 125
#define IRQ_IOMCU_TCP_TASK_DONE2LPMCU 126
#define IRQ_IOMCU_TCP_ERR2LPMCU 127
#define IRQ_IOMCU_TCP_SOFT2LPMCU 128
#define IRQ_DSS_MCU_PDP 129
#define IRQ_DSS_MCU_SDP 130
#define IRQ_DSS_MCU_OFFLINE 131
#define IRQ_RESERVED132 132
#define IRQ_INTR0_MODEM_IPC2LPMCU_NS 133
#define IRQ_GPIO18_INTR2 134
#define IRQ_GPIO19_INTR2 135
#define IRQ_INTR1_MODEM_IPC2LPMCU_NS 136
#define IRQ_PMUI2C1 137
#define IRQ_INTR01_MDM_IPCM_TLDSP1_S_NS 138
#define IRQ_MDM_BUS_ERR 139
#define IRQ_USB3_0 140
#define IRQ_USB3_1 141
#define IRQ_USB3_OTG 142
#define IRQ_USB3_BC 143
#define IRQ_PMC_DVFS_MAIA 144
#define IRQ_PMC_DVFS_A53 145
#define IRQ_PMC_DVFS_G3D 146
#define IRQ_RESERVED147 147
#define IRQ_RESERVED148 148
#define IRQ_RESERVED149 149
#define IRQ_RESERVED150 150
#define IRQ_RESERVED151 151
#define IRQ_RESERVED152 152
#define IRQ_WATCHDOG 153
#define IRQ_CCI400_OVERFLOW 154
#define IRQ_IPC_S_INT3 155
#define IRQ_IPC_S_INT4 156
#define IRQ_RESERVED157 157
#define IRQ_IPC_S_MBX13 158
#define IRQ_IPC_S_MBX14 159
#define IRQ_IPC_S_MBX15 160
#define IRQ_IPC_S_MBX16 161
#define IRQ_IPC_S_MBX17 162
#define IRQ_IPC_S_MBX18 163
#define IRQ_RESERVED164 164
#define IRQ_IPC_S_MBX23 165
#define IRQ_IPC_S_MBX24 166
#define IRQ_IPC_NS_INT3 167
#define IRQ_IPC_NS_INT4 168
#define IRQ_AO_IPC_S_MBX4 169
#define IRQ_AO_IPC_S_MBX5 170
#define IRQ_IPC_NS_MBX13 171
#define IRQ_IPC_NS_MBX14 172
#define IRQ_IPC_NS_MBX15 173
#define IRQ_IPC_NS_MBX16 174
#define IRQ_IPC_NS_MBX17 175
#define IRQ_IPC_NS_MBX18 176
#define IRQ_AO_IPC_S_INT1 177
#define IRQ_IPC_NS_MBX_23_24_AO_2_6_10 178
#define IRQ_IPC_NS_MBX27 179
#define IRQ_IPC_NS_MBX28 180
#define IRQ_COMB_GIC_IPC 181
#define IRQ_COMB_IOM3_IPC 182
#define IRQ_IPC_IVP32_COMBO 183
#define IRQ_RESERVED184 184
#define IRQ_ASPIPC 185
#define IRQ_INTR_IPC_S_AO_3_MBX_AO_7 186
#define IRQ_RESERVED187 187
#define IRQ_ASP_WD 188
#define IRQ_ASP_AXI_DLOCK_DMA_SECURE_DMA_SECURE_N 189
#define IRQ_SCI0 190
#define IRQ_SCI1 191
#define IRQ_SOCP0 192
#define IRQ_SOCP1 193
#define IRQ_LDRX2ARM_TIMES_INT 194
#define IRQ_LDRX2ARM_WAKEUP_INT 195
#define IRQ_TDRX2ARM_WAKEUP_INT 196
#define IRQ_TDRX2ARM_TIMES_INT 197
#define IRQ_G1_BBP_TO_CPU_ON 198
#define IRQ_G2_BBP_TO_CPU_ON 199
#define IRQ_G3_BBP_TO_CPU_ON 200
#define IRQ_LTE2_DRX_ARM_WAKEUP_INT 201
#define IRQ_W_ARM_INT02_2 202
#define IRQ_W_ARM_INT03_2 203
#define IRQ_W_ARM_INT02 204
#define IRQ_W_ARM_INT03 205
#define IRQ_CBBP_INT01_2 206
#define IRQ_LTE2_DRX_ARM_TIMES_INT 207
#define IRQ_MDM_IPF_INTR0 208
#define IRQ_MDM_IPF_INTR1 209
#define IRQ_MDM_EDMAC0_INTR2 210
#define IRQ_GIC_IRQ_FIQ_OUT0 211
#define IRQ_GIC_IRQ_FIQ_OUT1 212
#define IRQ_GIC_IRQ_FIQ_OUT2 213
#define IRQ_GIC_IRQ_FIQ_OUT3 214
#define IRQ_GIC_IRQ_FIQ_OUT4 215
#define IRQ_GIC_IRQ_FIQ_OUT5 216
#define IRQ_GIC_IRQ_FIQ_OUT6 217
#define IRQ_GIC_IRQ_FIQ_OUT7 218
#define IRQ_INTR_ICS_LPMCU 219
#define IRQ_INTR_REPAIR_ERR 220
#define IRQ_IVP32_WATCH_DOG 221
#define IRQ_MMBUF_ASC0 222
#define IRQ_MMBUF_ASC1 223
#define IRQ_RESERVED224 224
#define IRQ_INTR_LPMCU_MDC 225
#define IRQ_ISP_TO_DDRC_DFS_OK 226
#define IRQ_INTR_EXMBIST 227
#define IRQ_INTR_ATGC 228
#define IRQ_DSS_DFS_OK 229
#define IRQ_RESERVED230 230
#define IRQ_RESERVED231 231
#define IRQ_RESERVED232 232
#define IRQ_PLL_UNLOCK 233
#define IRQ_NOCBUS_NONIDLE_PEND 234
#define IRQ_FREQUENCY_VOTE 235
#define IRQ_LPMCU_TIMER1 236
#define IRQ_LPMCU_TIMER2 237
#define IRQ_CTI2 238
#define IRQ_CTI3 239
#define IRQ_MAX 239
#define FAULT_SVC_ID 11
#define FAULT_PENDSV_ID 14
#define FAULT_SYSTICK_ID 15
#define IRQ_GIC_OUT(cluster,core) (IRQ_GIC_IRQ_FIQ_OUT0 + ((cluster) << 2) + (core))
#define IRQ_GPIO0 48
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
