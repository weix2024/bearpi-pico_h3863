/*
 * Copyright (c) HiSilicon (Shanghai) Technologies Co., Ltd. 2022-2022. All rights reserved.
 * Description: 校准涉及到的phy寄存器操作接口
 * Date: 2022-10-22
 */

#ifndef __FE_HAL_PHY_REG_IF_HOST_H__
#define __FE_HAL_PHY_REG_IF_HOST_H__

#include "osal_types.h"
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

osal_void hal_set_phy_bw_mode_cfg_phy_bw_mode(osal_u32 cfg_phy_bw_mode);

// TPC ram 读写
osal_void hal_set_tpc_ram_access_reg1_cfg_tpc_ram_period(osal_u32 cfg_tpc_ram_period);
osal_void hal_set_tpc_ram_access_reg1_cfg_indirect_rw_mode(osal_u32 cfg_indirect_rw_mode);
osal_void hal_set_tpc_ram_access_reg1_cfg_tpc_table_access_addr(osal_u32 cfg_tpc_table_access_addr);
osal_void hal_set_tpc_ram_access_reg2_cfg_tpc_table_wr_data(osal_u32 cfg_tpc_table_wr_data);
// 二级映射
osal_void hal_set_rf_pa_code_lut0_cfg_rf_pa_code_lut0(osal_u32 cfg_rf_pa_code_lut0);
osal_void hal_set_rf_pa_code_lut0_cfg_rf_pa_code_lut1(osal_u32 cfg_rf_pa_code_lut1);
osal_void hal_set_rf_pa_code_lut0_cfg_rf_pa_code_lut2(osal_u32 cfg_rf_pa_code_lut2);
osal_void hal_set_rf_pa_code_lut0_cfg_rf_pa_code_lut3(osal_u32 cfg_rf_pa_code_lut3);
osal_void hal_set_rf_pa_code_lut1_cfg_rf_pa_code_lut4(osal_u32 cfg_rf_pa_code_lut4);
osal_void hal_set_rf_pa_code_lut1_cfg_rf_pa_code_lut5(osal_u32 cfg_rf_pa_code_lut5);
osal_void hal_set_rf_pa_code_lut1_cfg_rf_pa_code_lut6(osal_u32 cfg_rf_pa_code_lut6);
osal_void hal_set_rf_pa_code_lut1_cfg_rf_pa_code_lut7(osal_u32 cfg_rf_pa_code_lut7);
osal_void hal_set_rf_pa_code_lut2_cfg_rf_pa_code_lut8(osal_u32 cfg_rf_pa_code_lut8);
osal_void hal_set_rf_pa_code_lut2_cfg_rf_pa_code_lut9(osal_u32 cfg_rf_pa_code_lut9);
osal_void hal_set_rf_pa_code_lut2_cfg_rf_pa_code_lut10(osal_u32 cfg_rf_pa_code_lut10);
// dbb sacle shadow
osal_void hal_set_tpc_boundary_threshold1_cfg_tpc_boundary_0(osal_u32 cfg_tpc_boundary_0);
osal_void hal_set_tpc_boundary_threshold1_cfg_tpc_boundary_1(osal_u32 cfg_tpc_boundary_1);
osal_void hal_set_tpc_boundary_threshold1_cfg_tpc_boundary_2(osal_u32 cfg_tpc_boundary_2);
osal_void hal_set_tpc_boundary_threshold2_cfg_tpc_boundary_3(osal_u32 cfg_tpc_boundary_3);
osal_void hal_set_tpc_boundary_threshold2_cfg_tpc_boundary_4(osal_u32 cfg_tpc_boundary_4);
osal_void hal_set_tpc_boundary_threshold2_cfg_tpc_boundary_5(osal_u32 cfg_tpc_boundary_5);
osal_void hal_set_tpc_boundary_threshold2_cfg_tpc_boundary_6(osal_u32 cfg_tpc_boundary_6);
osal_void hal_set_dbb_scale_shadow1_cfg_dbb_scale_shadow_0(osal_u32 cfg_dbb_scale_shadow_0);
osal_u32 hal_get_dbb_scale_shadow1_cfg_dbb_scale_shadow_0(osal_void);
osal_void hal_set_dbb_scale_shadow1_cfg_dbb_scale_shadow_1(osal_u32 cfg_dbb_scale_shadow_1);
osal_u32 hal_get_dbb_scale_shadow1_cfg_dbb_scale_shadow_1(osal_void);
osal_void hal_set_dbb_scale_shadow1_cfg_dbb_scale_shadow_2(osal_u32 cfg_dbb_scale_shadow_2);
osal_u32 hal_get_dbb_scale_shadow1_cfg_dbb_scale_shadow_2(osal_void);
osal_void hal_set_dbb_scale_shadow1_cfg_dbb_scale_shadow_3(osal_u32 cfg_dbb_scale_shadow_3);
osal_u32 hal_get_dbb_scale_shadow1_cfg_dbb_scale_shadow_3(osal_void);
osal_void hal_set_dbb_scale_shadow2_cfg_dbb_scale_shadow_4(osal_u32 cfg_dbb_scale_shadow_4);
osal_u32 hal_get_dbb_scale_shadow2_cfg_dbb_scale_shadow_4(osal_void);
osal_void hal_set_dbb_scale_shadow2_cfg_dbb_scale_shadow_5(osal_u32 cfg_dbb_scale_shadow_5);
osal_u32 hal_get_dbb_scale_shadow2_cfg_dbb_scale_shadow_5(osal_void);
osal_void hal_set_dbb_scale_shadow2_cfg_dbb_scale_shadow_6(osal_u32 cfg_dbb_scale_shadow_6);
osal_u32 hal_get_dbb_scale_shadow2_cfg_dbb_scale_shadow_6(osal_void);
osal_void hal_set_dbb_scale_shadow2_cfg_dbb_scale_shadow_7(osal_u32 cfg_dbb_scale_shadow_7);
osal_u32 hal_get_dbb_scale_shadow2_cfg_dbb_scale_shadow_7(osal_void);
osal_void hal_set_cfg_reserv_1_reg_1_reserv_1_wr_addr(osal_u32 reserv_1_wr_addr);
osal_void hal_set_cfg_reserv_1_reg_1_cfg_reserv_1_wr_en(osal_u32 cfg_reserv_1_wr_en);
osal_void hal_set_cfg_reserv_1_reg_2_reserv_1_wr_value_0ch(osal_u32 reserv_1_wr_value_0ch);
osal_u32 hal_get_he_tx_foc_power_boost_win_ctrl_cfg_tx_power_boost_bypass(osal_void);
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif
#endif  // __CALI_PHY_REG_IF_H__