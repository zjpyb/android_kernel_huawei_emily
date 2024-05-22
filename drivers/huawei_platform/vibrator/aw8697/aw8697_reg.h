/*
 * x aw8697.h
 *
 * code for vibrator
 *
 * Copyright (c) 2020 Huawei Technologies Co., Ltd.
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

#ifndef _AW8697_REG_H_
#define _AW8697_REG_H_

#define AW8697_REG_ID            0x00
#define AW8697_REG_SYSST         0x01
#define AW8697_REG_SYSINT        0x02
#define AW8697_REG_SYSINTM       0x03
#define AW8697_REG_SYSCTRL       0x04
#define AW8697_REG_GO            0x05
#define AW8697_REG_RTP_DATA      0x06
#define AW8697_REG_WAVSEQ1       0x07
#define AW8697_REG_WAVSEQ2       0x08
#define AW8697_REG_WAVSEQ3       0x09
#define AW8697_REG_WAVSEQ4       0x0a
#define AW8697_REG_WAVSEQ5       0x0b
#define AW8697_REG_WAVSEQ6       0x0c
#define AW8697_REG_WAVSEQ7       0x0d
#define AW8697_REG_WAVSEQ8       0x0e
#define AW8697_REG_WAVLOOP1      0x0f
#define AW8697_REG_WAVLOOP2      0x10
#define AW8697_REG_WAVLOOP3      0x11
#define AW8697_REG_WAVLOOP4      0x12
#define AW8697_REG_MAIN_LOOP     0x13
#define AW8697_REG_TRG1_WAV_P    0x14
#define AW8697_REG_TRG2_WAV_P    0x15
#define AW8697_REG_TRG3_WAV_P    0x16
#define AW8697_REG_TRG1_WAV_N    0x17
#define AW8697_REG_TRG2_WAV_N    0x18
#define AW8697_REG_TRG3_WAV_N    0x19
#define AW8697_REG_TRG_PRIO      0x1a
#define AW8697_REG_TRG_CFG1      0x1b
#define AW8697_REG_TRG_CFG2      0x1c
#define AW8697_REG_DBGCTRL       0x20
#define AW8697_REG_BASE_ADDRH    0x21
#define AW8697_REG_BASE_ADDRL    0x22
#define AW8697_REG_FIFO_AEH      0x23
#define AW8697_REG_FIFO_AEL      0x24
#define AW8697_REG_FIFO_AFH      0x25
#define AW8697_REG_FIFO_AFL      0x26
#define AW8697_REG_WAKE_DLY      0x27
#define AW8697_REG_START_DLY     0x28
#define AW8697_REG_END_DLY_H     0x29
#define AW8697_REG_END_DLY_L     0x2a
#define AW8697_REG_DATCTRL       0x2b
#define AW8697_REG_PWMDEL        0x2c
#define AW8697_REG_PWMPRC        0x2d
#define AW8697_REG_PWMDBG        0x2e
#define AW8697_REG_LDOCTRL       0x2f
#define AW8697_REG_DBGSTAT       0x30
#define AW8697_REG_BSTDBG1       0x31
#define AW8697_REG_BSTDBG2       0x32
#define AW8697_REG_BSTDBG3       0x33
#define AW8697_REG_BSTCFG        0x34
#define AW8697_REG_ANADBG        0x35
#define AW8697_REG_ANACTRL       0x36
#define AW8697_REG_CPDBG         0x37
#define AW8697_REG_GLBDBG        0x38
#define AW8697_REG_DATDBG        0x39
#define AW8697_REG_BSTDBG4       0x3a
#define AW8697_REG_BSTDBG5       0x3b
#define AW8697_REG_BSTDBG6       0x3c
#define AW8697_REG_HDRVDBG       0x3d
#define AW8697_REG_PRLVL         0x3e
#define AW8697_REG_PRTIME        0x3f
#define AW8697_REG_RAMADDRH      0x40
#define AW8697_REG_RAMADDRL      0x41
#define AW8697_REG_RAMDATA       0x42
#define AW8697_REG_GLB_STATE     0x46
#define AW8697_REG_BST_AUTO      0x47
#define AW8697_REG_CONT_CTRL     0x48
#define AW8697_REG_F_PRE_H       0x49
#define AW8697_REG_F_PRE_L       0x4a
#define AW8697_REG_TD_H          0x4b
#define AW8697_REG_TD_L          0x4c
#define AW8697_REG_TSET          0x4d
#define AW8697_REG_TRIM_LRA      0x5b
#define AW8697_REG_R_SPARE       0x5d
#define AW8697_REG_D2SCFG        0x5e
#define AW8697_REG_DETCTRL       0x5f
#define AW8697_REG_RLDET         0x60
#define AW8697_REG_OSDET         0x61
#define AW8697_REG_VBATDET       0x62
#define AW8697_REG_TESTDET       0x63
#define AW8697_REG_DETLO         0x64
#define AW8697_REG_BEMFDBG       0x65
#define AW8697_REG_ADCTEST       0x66
#define AW8697_REG_BEMFTEST      0x67
#define AW8697_REG_F_LRA_F0_H    0x68
#define AW8697_REG_F_LRA_F0_L    0x69
#define AW8697_REG_F_LRA_CONT_H  0x6a
#define AW8697_REG_F_LRA_CONT_L  0x6b
#define AW8697_REG_WAIT_VOL_MP   0x6d
#define AW8697_REG_WAIT_VOL_MN   0x6f
#define AW8697_REG_BEMF_VOL_H    0x70
#define AW8697_REG_BEMF_VOL_L    0x71
#define AW8697_REG_ZC_THRSH_H    0x72
#define AW8697_REG_ZC_THRSH_L    0x73
#define AW8697_REG_BEMF_VTHH_H   0x74
#define AW8697_REG_BEMF_VTHH_L   0x75
#define AW8697_REG_BEMF_VTHL_H   0x76
#define AW8697_REG_BEMF_VTHL_L   0x77
#define AW8697_REG_BEMF_NUM      0x78
#define AW8697_REG_DRV_TIME      0x79
#define AW8697_REG_TIME_NZC      0x7a
#define AW8697_REG_DRV_LVL       0x7b
#define AW8697_REG_DRV_LVL_OV    0x7c
#define AW8697_REG_NUM_F0_1      0x7d
#define AW8697_REG_NUM_F0_2      0x7e
#define AW8697_REG_NUM_F0_3      0x7f

#define REG_NONE_ACCESS          0
#define REG_RD_ACCESS            (1 << 0)
#define REG_WR_ACCESS            (1 << 1)
#define AW8697_REG_MAX           0xff
#define AW8697_BIT_DATCTRL_FIR_ENABLE_MASK  (~(1 << 1))
#define AW8697_BIT_DATCTRL_FIR_ENABLE       (1 << 1)
#define AW8697_BIT_DATCTRL_FIR_DISABLE      (0 << 1)

const unsigned char aw8697_reg_access[AW8697_REG_MAX] = {
	[AW8697_REG_ID] = REG_RD_ACCESS,
	[AW8697_REG_SYSST] = REG_RD_ACCESS,
	[AW8697_REG_SYSINT] = REG_RD_ACCESS,
	[AW8697_REG_SYSINTM] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_SYSCTRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_GO] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_RTP_DATA] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVSEQ1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVSEQ2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVSEQ3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVSEQ4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVSEQ5] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVSEQ6] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVSEQ7] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVSEQ8] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVLOOP1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVLOOP2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVLOOP3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAVLOOP4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_MAIN_LOOP] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG1_WAV_P] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG2_WAV_P] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG3_WAV_P] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG1_WAV_N] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG2_WAV_N] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG3_WAV_N] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG_PRIO] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG_CFG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRG_CFG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DBGCTRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BASE_ADDRH] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BASE_ADDRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_FIFO_AEH] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_FIFO_AEL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_FIFO_AFH] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_FIFO_AFL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAKE_DLY] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_START_DLY] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_END_DLY_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_END_DLY_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DATCTRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_PWMDEL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_PWMPRC] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_PWMDBG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_LDOCTRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DBGSTAT] = REG_RD_ACCESS,
	[AW8697_REG_BSTDBG1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BSTDBG2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BSTDBG3] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BSTCFG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_ANADBG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_ANACTRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_CPDBG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_GLBDBG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DATDBG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BSTDBG4] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BSTDBG5] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BSTDBG6] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_HDRVDBG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_PRLVL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_PRTIME] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_RAMADDRH] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_RAMADDRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_RAMDATA] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_GLB_STATE] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BST_AUTO] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_CONT_CTRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_F_PRE_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_F_PRE_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TD_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TD_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TSET] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TRIM_LRA] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_R_SPARE] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_D2SCFG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DETCTRL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_RLDET] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_OSDET] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_VBATDET] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TESTDET] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DETLO] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMFDBG] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_ADCTEST] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMFTEST] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_F_LRA_F0_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_F_LRA_F0_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_F_LRA_CONT_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_F_LRA_CONT_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAIT_VOL_MP] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_WAIT_VOL_MN] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMF_VOL_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMF_VOL_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_ZC_THRSH_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_ZC_THRSH_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMF_VTHH_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMF_VTHH_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMF_VTHL_H] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMF_VTHL_L] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_BEMF_NUM] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DRV_TIME] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_TIME_NZC] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DRV_LVL] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_DRV_LVL_OV] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_NUM_F0_1] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_NUM_F0_2] = REG_RD_ACCESS | REG_WR_ACCESS,
	[AW8697_REG_NUM_F0_3] = REG_RD_ACCESS | REG_WR_ACCESS,
};

// SYSST: reg0x01
#define AW8697_BIT_SYSST_BSTERRS                    (1 << 7)
#define AW8697_BIT_SYSST_OVS                        (1 << 6)
#define AW8697_BIT_SYSST_UVLS                       (1 << 5)
#define AW8697_BIT_SYSST_FF_AES                     (1 << 4)
#define AW8697_BIT_SYSST_FF_AFS                     (1 << 3)
#define AW8697_BIT_SYSST_OCDS                       (1 << 2)
#define AW8697_BIT_SYSST_OTS                        (1 << 1)
#define AW8697_BIT_SYSST_DONES                      (1 << 0)

// SYSINT: reg0x02
#define AW8697_BIT_SYSINT_BSTERRI                   (1 << 7)
#define AW8697_BIT_SYSINT_OVI                       (1 << 6)
#define AW8697_BIT_SYSINT_UVLI                      (1 << 5)
#define AW8697_BIT_SYSINT_FF_AEI                    (1 << 4)
#define AW8697_BIT_SYSINT_FF_AFI                    (1 << 3)
#define AW8697_BIT_SYSINT_OCDI                      (1 << 2)
#define AW8697_BIT_SYSINT_OTI                       (1 << 1)
#define AW8697_BIT_SYSINT_DONEI                     (1 << 0)

// SYSINTM: reg0x03
#define AW8697_BIT_SYSINTM_BSTERR_MASK              (~(1 << 7))
#define AW8697_BIT_SYSINTM_BSTERR_OFF               (1 << 7)
#define AW8697_BIT_SYSINTM_BSTERR_EN                (0 << 7)
#define AW8697_BIT_SYSINTM_OV_MASK                  (~(1 << 6))
#define AW8697_BIT_SYSINTM_OV_OFF                   (1 << 6)
#define AW8697_BIT_SYSINTM_OV_EN                    (0 << 6)
#define AW8697_BIT_SYSINTM_UVLO_MASK                (~(1 << 5))
#define AW8697_BIT_SYSINTM_UVLO_OFF                 (1 << 5)
#define AW8697_BIT_SYSINTM_UVLO_EN                  (0 << 5)
#define AW8697_BIT_SYSINTM_FF_AE_MASK               (~(1 << 4))
#define AW8697_BIT_SYSINTM_FF_AE_OFF                (1 << 4)
#define AW8697_BIT_SYSINTM_FF_AE_EN                 (0 << 4)
#define AW8697_BIT_SYSINTM_FF_AF_MASK               (~(1 << 3))
#define AW8697_BIT_SYSINTM_FF_AF_OFF                (1 << 3)
#define AW8697_BIT_SYSINTM_FF_AF_EN                 (0 << 3)
#define AW8697_BIT_SYSINTM_OCD_MASK                 (~(1 << 2))
#define AW8697_BIT_SYSINTM_OCD_OFF                  (1 << 2)
#define AW8697_BIT_SYSINTM_OCD_EN                   (0 << 2)
#define AW8697_BIT_SYSINTM_OT_MASK                  (~(1 << 1))
#define AW8697_BIT_SYSINTM_OT_OFF                   (1 << 1)
#define AW8697_BIT_SYSINTM_OT_EN                    (0 << 1)
#define AW8697_BIT_SYSINTM_DONE_MASK                (~(1 << 0))
#define AW8697_BIT_SYSINTM_DONE_OFF                 (1 << 0)
#define AW8697_BIT_SYSINTM_DONE_EN                  (0 << 0)

// SYSCTRL: reg0x04
#define AW8697_BIT_SYSCTRL_WAVDAT_MODE_MASK         (~(3 << 6))
#define AW8697_BIT_SYSCTRL_WAVDAT_MODE_4X           (3 << 6)
#define AW8697_BIT_SYSCTRL_WAVDAT_MODE_2X           (0 << 6)
#define AW8697_BIT_SYSCTRL_WAVDAT_MODE_1X           (1 << 6)
#define AW8697_BIT_SYSCTRL_RAMINIT_MASK             (~(1 << 5))
#define AW8697_BIT_SYSCTRL_RAMINIT_EN               (1 << 5)
#define AW8697_BIT_SYSCTRL_RAMINIT_OFF              (0 << 5)
#define AW8697_BIT_SYSCTRL_PLAY_MODE_MASK           (~(3 << 2))
#define AW8697_BIT_SYSCTRL_PLAY_MODE_CONT           (2 << 2)
#define AW8697_BIT_SYSCTRL_PLAY_MODE_RTP            (1 << 2)
#define AW8697_BIT_SYSCTRL_PLAY_MODE_RAM            (0 << 2)
#define AW8697_BIT_SYSCTRL_BST_MODE_MASK            (~(1 << 1))
#define AW8697_BIT_SYSCTRL_BST_MODE_BOOST           (1 << 1)
#define AW8697_BIT_SYSCTRL_BST_MODE_BYPASS          (0 << 1)
#define AW8697_BIT_SYSCTRL_WORK_MODE_MASK           (~(1 << 0))
#define AW8697_BIT_SYSCTRL_STANDBY                  (1 << 0)
#define AW8697_BIT_SYSCTRL_ACTIVE                   (0 << 0)

// GO: reg0x05
#define AW8697_BIT_GO_MASK                          (~(1 << 0))
#define AW8697_BIT_GO_ENABLE                        (1 << 0)
#define AW8697_BIT_GO_DISABLE                       (0 << 0)

// WAVSEQ1: reg0x07
#define AW8697_BIT_WAVSEQ1_WAIT                     (1 << 7)
#define AW8697_BIT_WAVSEQ1_WAV_FRM_SEQ1_MASK        (~(127 << 0))

// WAVSEQ2: reg0x08
#define AW8697_BIT_WAVSEQ2_WAIT                     (1 << 7)
#define AW8697_BIT_WAVSEQ2_WAV_FRM_SEQ2_MASK        (~(127 << 0))

// WAVSEQ3: reg0x09
#define AW8697_BIT_WAVSEQ3_WAIT                     (1 << 7)
#define AW8697_BIT_WAVSEQ3_WAV_FRM_SEQ3_MASK        (~(127 << 0))

// WAVSEQ4: reg0x0a
#define AW8697_BIT_WAVSEQ4_WAIT                     (1 << 7)
#define AW8697_BIT_WAVSEQ4_WAV_FRM_SEQ4_MASK        (~(127 << 0))

// WAVSEQ5: reg0x0b
#define AW8697_BIT_WAVSEQ5_WAIT                     (1 << 7)
#define AW8697_BIT_WAVSEQ5_WAV_FRM_SEQ5_MASK        (~(127 << 0))

// WAVSEQ6: reg0x0c
#define AW8697_BIT_WAVSEQ6_WAIT                     (1 << 7)
#define AW8697_BIT_WAVSEQ6_WAV_FRM_SEQ6_MASK        (~(127 << 0))

// WAVSEQ7: reg0x0d
#define AW8697_BIT_WAVSEQ7_WAIT                     (1 << 7)
#define AW8697_BIT_WAVSEQ7_WAV_FRM_SEQ7_MASK        (~(127 << 0))

// WAVSEQ8: reg0x0e
#define AW8697_BIT_WAVSEQ8_WAIT                     (1 << 7)
#define AW8697_BIT_WAVSEQ8_WAV_FRM_SEQ8_MASK        (~(127 << 0))

// WAVLOOP:
#define AW8697_BIT_WAVLOOP_SEQN_MASK                (~(15 << 4))
#define AW8697_BIT_WAVLOOP_SEQNP1_MASK              (~(15 << 0))
#define AW8697_BIT_WAVLOOP_INIFINITELY              (15 << 0)

// WAVLOOP1: reg0x0f
#define AW8697_BIT_WAVLOOP1_SEQ1_MASK               (~(15 << 4))
#define AW8697_BIT_WAVLOOP1_SEQ2_MASK               (~(15 << 0))

// WAVLOOP2: reg0x10
#define AW8697_BIT_WAVLOOP2_SEQ3_MASK               (~(15 << 4))
#define AW8697_BIT_WAVLOOP2_SEQ4_MASK               (~(15 << 0))

// WAVLOOP3: reg0x11
#define AW8697_BIT_WAVLOOP3_SEQ5_MASK               (~(15 << 4))
#define AW8697_BIT_WAVLOOP3_SEQ6_MASK               (~(15 << 0))

// WAVLOOP4: reg0x12
#define AW8697_BIT_WAVLOOP4_SEQ7_MASK               (~(15 << 4))
#define AW8697_BIT_WAVLOOP4_SEQ8_MASK               (~(15 << 0))

// PLAYPRIO: reg0x1a
#define AW8697_BIT_PLAYPRIO_GO_MASK                 (~(3 << 6))
#define AW8697_BIT_PLAYPRIO_TRIG3_MASK              (~(3 << 4))
#define AW8697_BIT_PLAYPRIO_TRIG2_MASK              (~(3 << 2))
#define AW8697_BIT_PLAYPRIO_TRIG1_MASK              (~(3 << 0))

// TRGCFG1: reg0x1b
#define AW8697_BIT_TRGCFG1_TRG3_POLAR_MASK          (~(1 << 5))
#define AW8697_BIT_TRGCFG1_TRG3_POLAR_NEG           (1 << 5)
#define AW8697_BIT_TRGCFG1_TRG3_POLAR_POS           (0 << 5)
#define AW8697_BIT_TRGCFG1_TRG3_EDGE_MASK           (~(1 << 4))
#define AW8697_BIT_TRGCFG1_TRG3_EDGE_POS            (1 << 4)
#define AW8697_BIT_TRGCFG1_TRG3_EDGE_POS_NEG        (0 << 4)
#define AW8697_BIT_TRGCFG1_TRG2_POLAR_MASK          (~(1 << 3))
#define AW8697_BIT_TRGCFG1_TRG2_POLAR_NEG           (1 << 3)
#define AW8697_BIT_TRGCFG1_TRG2_POLAR_POS           (0 << 3)
#define AW8697_BIT_TRGCFG1_TRG2_EDGE_MASK           (~(1 << 2))
#define AW8697_BIT_TRGCFG1_TRG2_EDGE_POS            (1 << 2)
#define AW8697_BIT_TRGCFG1_TRG2_EDGE_POS_NEG        (0 << 2)
#define AW8697_BIT_TRGCFG1_TRG1_POLAR_MASK          (~(1 << 1))
#define AW8697_BIT_TRGCFG1_TRG1_POLAR_NEG           (1 << 1)
#define AW8697_BIT_TRGCFG1_TRG1_POLAR_POS           (0 << 1)
#define AW8697_BIT_TRGCFG1_TRG1_EDGE_MASK           (~(1 << 0))
#define AW8697_BIT_TRGCFG1_TRG1_EDGE_POS            (1 << 0)
#define AW8697_BIT_TRGCFG1_TRG1_EDGE_POS_NEG        (0 << 0)

// TRGCFG2: reg0x1c
#define AW8697_BIT_TRGCFG2_TRG3_ENABLE_MASK         (~(1 << 2))
#define AW8697_BIT_TRGCFG2_TRG3_ENABLE              (1 << 2)
#define AW8697_BIT_TRGCFG2_TRG3_DISABLE             (0 << 2)
#define AW8697_BIT_TRGCFG2_TRG2_ENABLE_MASK         (~(1 << 1))
#define AW8697_BIT_TRGCFG2_TRG2_ENABLE              (1 << 1)
#define AW8697_BIT_TRGCFG2_TRG2_DISABLE             (0 << 1)
#define AW8697_BIT_TRGCFG2_TRG1_ENABLE_MASK         (~(1 << 0))
#define AW8697_BIT_TRGCFG2_TRG1_ENABLE              (1 << 0)
#define AW8697_BIT_TRGCFG2_TRG1_DISABLE             (0 << 0)

// DBGCTRL: reg0x20
#define AW8697_BIT_DBGCTRL_INT_EDGE_MODE_MASK       (~(1 << 3))
#define AW8697_BIT_DBGCTRL_INT_EDGE_MODE_POS        (1 << 3)
#define AW8697_BIT_DBGCTRL_INT_EDGE_MODE_BOTH       (0 << 3)
#define AW8697_BIT_DBGCTRL_INT_MODE_MASK            (~(1 << 2))
#define AW8697_BIT_DBGCTRL_INT_MODE_EDGE            (1 << 2)
#define AW8697_BIT_DBGCTRL_INT_MODE_LEVEL           (0 << 2)

// DATCTRL: reg0x2b
#define AW8697_BIT_DATCTRL_FC_MASK                  (~(1 << 6))
#define AW8697_BIT_DATCTRL_FC_1000HZ                (3 << 6)
#define AW8697_BIT_DATCTRL_FC_800HZ                 (3 << 6)
#define AW8697_BIT_DATCTRL_FC_600HZ                 (1 << 6)
#define AW8697_BIT_DATCTRL_FC_400HZ                 (0 << 6)
#define AW8697_BIT_DATCTRL_LPF_ENABLE_MASK          (~(1 << 5))
#define AW8697_BIT_DATCTRL_LPF_ENABLE               (1 << 5)
#define AW8697_BIT_DATCTRL_LPF_DISABLE              (0 << 5)
#define AW8697_BIT_DATCTRL_WAKEMODE_ENABLE_MASK     (~(1 << 0))
#define AW8697_BIT_DATCTRL_WAKEMODE_ENABLE          (1 << 0)
#define AW8697_BIT_DATCTRL_WAKEMODE_DISABLE         (0 << 0)

// PWMPRC: reg0x2d
#define AW8697_BIT_PWMPRC_PRC_MASK                  (~(1 << 7))
#define AW8697_BIT_PWMPRC_PRC_ENABLE                (1 << 7)
#define AW8697_BIT_PWMPRC_PRC_DISABLE               (0 << 7)
#define AW8697_BIT_PWMPRC_PRCTIME_MASK              (~(0x7f << 0))

// PWMDBG: reg0x2e
#define AW8697_BIT_PWMDBG_PWM_MODE_MASK             (~(3 << 5))
#define AW8697_BIT_PWMDBG_PWM_12K                   (3 << 5)
#define AW8697_BIT_PWMDBG_PWM_24K                   (2 << 5)
#define AW8697_BIT_PWMDBG_PWM_48K                   (0 << 5)

// DBGST: reg0x30
#define AW8697_BIT_DBGSTAT_FF_EMPTY                 (1 << 0)

// BSTCFG: reg0x34
#define AW8697_BIT_BSTCFG_PEAKCUR_MASK              (~(7 << 0))
#define AW8697_BIT_BSTCFG_PEAKCUR_4A                (7 << 0)
#define AW8697_BIT_BSTCFG_PEAKCUR_3P75A             (6 << 0)
#define AW8697_BIT_BSTCFG_PEAKCUR_3P5A              (5 << 0)
#define AW8697_BIT_BSTCFG_PEAKCUR_3P25A             (4 << 0)
#define AW8697_BIT_BSTCFG_PEAKCUR_3A                (3 << 0)
#define AW8697_BIT_BSTCFG_PEAKCUR_2P5A              (2 << 0)
#define AW8697_BIT_BSTCFG_PEAKCUR_2A                (1 << 0)
#define AW8697_BIT_BSTCFG_PEAKCUR_1P5A              (0 << 0)

// ANADBG: reg0x35
#define AW8697_BIT_ANADBG_IOC_MASK                  (~(3 << 2))
#define AW8697_BIT_ANADBG_IOC_4P65A                 (3 << 2)
#define AW8697_BIT_ANADBG_IOC_4P15A                 (2 << 2)
#define AW8697_BIT_ANADBG_IOC_3P65A                 (1 << 2)
#define AW8697_BIT_ANADBG_IOC_3P15A                 (0 << 2)

// ANACTRL: reg0x36
#define AW8697_BIT_ANACTRL_LRA_SRC_MASK             (~(1 << 5))
#define AW8697_BIT_ANACTRL_LRA_SRC_REG              (1 << 5)
#define AW8697_BIT_ANACTRL_LRA_SRC_EFUSE            (0 << 5)
#define AW8697_BIT_ANACTRL_HD_PD_MASK               (~(1 << 3))
#define AW8697_BIT_ANACTRL_HD_PD_EN                 (1 << 3)
#define AW8697_BIT_ANACTRL_HD_HZ_EN                 (0 << 3)

/* BSTDBG4: reg0x3a */
#define AW8697_BIT_BSTDBG4_BSTVOL_MASK              (~(31 << 1))

// PRLVL: reg0x3e
#define AW8697_BIT_PRLVL_PR_MASK                    (~(1 << 7))
#define AW8697_BIT_PRLVL_PR_ENABLE                  (1 << 7)
#define AW8697_BIT_PRLVL_PR_DISABLE                 (0 << 7)
#define AW8697_BIT_PRLVL_PRLVL_MASK                 (~(0x7f << 0))

// PRTIME: reg0x3f
#define AW8697_BIT_PRTIME_PRTIME_MASK               (~(0xff << 0))

// BST_AUTO: reg0x47
#define AW8697_BIT_BST_AUTO_BST_AUTOSW_MASK         (~(1 << 2))
#define AW8697_BIT_BST_AUTO_BST_AUTOMATIC_BOOST     (1 << 2)
#define AW8697_BIT_BST_AUTO_BST_MANUAL_BOOST        (0 << 2)
#define AW8697_BIT_BST_AUTO_BST_RTP_MASK            (~(1 << 1))
#define AW8697_BIT_BST_AUTO_BST_RTP_ENABLE          (1 << 1)
#define AW8697_BIT_BST_AUTO_BST_RTP_DISABLE         (0 << 1)
#define AW8697_BIT_BST_AUTO_BST_RAM_MASK            (~(1 << 0))
#define AW8697_BIT_BST_AUTO_BST_RAM_ENABLE          (1 << 0)
#define AW8697_BIT_BST_AUTO_BST_RAM_DISABLE         (0 << 0)

// CONT_CTRL: reg0x48
#define AW8697_BIT_CONT_CTRL_ZC_DETEC_MASK          (~(1 << 7))
#define AW8697_BIT_CONT_CTRL_ZC_DETEC_ENABLE        (1 << 7)
#define AW8697_BIT_CONT_CTRL_ZC_DETEC_DISABLE       (0 << 7)
#define AW8697_BIT_CONT_CTRL_WAIT_PERIOD_MASK       (~(3 << 5))
#define AW8697_BIT_CONT_CTRL_WAIT_8PERIOD           (3 << 5)
#define AW8697_BIT_CONT_CTRL_WAIT_4PERIOD           (2 << 5)
#define AW8697_BIT_CONT_CTRL_WAIT_2PERIOD           (1 << 5)
#define AW8697_BIT_CONT_CTRL_WAIT_1PERIOD           (0 << 5)
#define AW8697_BIT_CONT_CTRL_MODE_MASK              (~(1 << 4))
#define AW8697_BIT_CONT_CTRL_BY_DRV_TIME            (1 << 4)
#define AW8697_BIT_CONT_CTRL_BY_GO_SIGNAL           (0 << 4)
#define AW8697_BIT_CONT_CTRL_EN_CLOSE_MASK          (~(1 << 3))
#define AW8697_BIT_CONT_CTRL_CLOSE_PLAYBACK         (1 << 3)
#define AW8697_BIT_CONT_CTRL_OPEN_PLAYBACK          (0 << 3)
#define AW8697_BIT_CONT_CTRL_F0_DETECT_MASK         (~(1 << 2))
#define AW8697_BIT_CONT_CTRL_F0_DETECT_ENABLE       (1 << 2)
#define AW8697_BIT_CONT_CTRL_F0_DETECT_DISABLE      (0 << 2)
#define AW8697_BIT_CONT_CTRL_O2C_MASK               (~(1 << 1))
#define AW8697_BIT_CONT_CTRL_O2C_ENABLE             (1 << 1)
#define AW8697_BIT_CONT_CTRL_O2C_DISABLE            (0 << 1)
#define AW8697_BIT_CONT_CTRL_AUTO_BRK_MASK          (~(1 << 0))
#define AW8697_BIT_CONT_CTRL_AUTO_BRK_ENABLE        (1 << 0)
#define AW8697_BIT_CONT_CTRL_AUTO_BRK_DISABLE       (0 << 0)

// D2SCFG: reg0x5e
#define AW8697_BIT_D2SCFG_CLK_ADC_MASK              (~(7 << 5))
#define AW8697_BIT_D2SCFG_CLK_ASC_0P09375MHZ        (7 << 5)
#define AW8697_BIT_D2SCFG_CLK_ASC_0P1875MHZ         (6 << 5)
#define AW8697_BIT_D2SCFG_CLK_ASC_0P375MHZ          (5 << 5)
#define AW8697_BIT_D2SCFG_CLK_ASC_0P75MHZ           (4 << 5)
#define AW8697_BIT_D2SCFG_CLK_ASC_1P5MHZ            (3 << 5)
#define AW8697_BIT_D2SCFG_CLK_ASC_3MHZ              (2 << 5)
#define AW8697_BIT_D2SCFG_CLK_ASC_6MHZ              (1 << 5)
#define AW8697_BIT_D2SCFG_CLK_ASC_12MHZ             (0 << 5)

// DETCTRL: reg0x5f
#define AW8697_BIT_DETCTRL_RL_OS_MASK               (~(1 << 6))
#define AW8697_BIT_DETCTRL_RL_DETECT                (1 << 6)
#define AW8697_BIT_DETCTRL_OS_DETECT                (0 << 6)
#define AW8697_BIT_DETCTRL_PROTECT_MASK             (~(1 << 5))
#define AW8697_BIT_DETCTRL_PROTECT_NO_ACTION        (1 << 5)
#define AW8697_BIT_DETCTRL_PROTECT_SHUTDOWN         (0 << 5)
#define AW8697_BIT_DETCTRL_ADO_SLOT_MODE_MASK       (~(1 << 4))
#define AW8697_BIT_DETCTRL_ADO_SLOT_MODE_ENABLE     (1 << 4)
#define AW8697_BIT_DETCTRL_ADO_SLOT_MODE_DISABLE    (0 << 4)
#define AW8697_BIT_DETCTRL_VBAT_GO_MASK             (~(1 << 1))
#define AW8697_BIT_DETCTRL_VABT_GO_ENABLE           (1 << 1)
#define AW8697_BIT_DETCTRL_VBAT_GO_DISBALE          (0 << 1)
#define AW8697_BIT_DETCTRL_DIAG_GO_MASK             (~(1 << 0))
#define AW8697_BIT_DETCTRL_DIAG_GO_ENABLE           (1 << 0)
#define AW8697_BIT_DETCTRL_DIAG_GO_DISABLE          (0 << 0)


// ADCTEST: reg0x66
#define AW8697_BIT_ADCTEST_VBAT_MODE_MASK           (~(1 << 6))
#define AW8697_BIT_ADCTEST_VBAT_HW_COMP             (1 << 6)
#define AW8697_BIT_ADCTEST_VBAT_SW_COMP             (0 << 6)

// BEMF_NUM: reg0x78
#define AW8697_BIT_BEMF_NUM_BRK_MASK                (~(15 << 0))

#endif
