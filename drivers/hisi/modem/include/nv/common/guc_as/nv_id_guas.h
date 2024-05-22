/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may
 * *    be used to endorse or promote products derived from this software
 * *    without specific prior written permission.
 *
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __NV_ID_GUAS_H__
#define __NV_ID_GUAS_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/****************************************************************************
  1 宏定义
*****************************************************************************/

/* C核NV_ID定义 */
enum COMMON_GUAS_NV_ID_ENUM
{

/* 3223  */     en_NV_Item_GPRS_ActiveTimerLength                       = 3223,

/* 8210  */     en_NV_Item_Egprs_Multi_Slot_Class                       = 8210,
/* 8277  */     en_NV_Item_Egprs_Flag                                   = 8277,
/* 8284  */     en_NV_Item_WCDMA_PLMN_FREQ_PAIR_List                    = 8284,
/* 8326  */     en_Nv_Item_Gprs_Multi_Slot_Class                        = 8326,
/* 9008  */     en_NV_Item_WAS_RadioAccess_Capa_New                     = 9008,/* WAS新增NV项 */
/* 9009  */     en_NV_Item_GAS_High_Multislot_Class                     = 9009,

/* 9091 */      en_NV_Item_UTRAN_TDD_FREQ_BAND                          = 9091, /* 指示TDS Band信息 */

                en_NV_Item_COMMON_GUC_GUAS_NVID_BUTT
};

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif

/* end of nv_id_guas.h */

