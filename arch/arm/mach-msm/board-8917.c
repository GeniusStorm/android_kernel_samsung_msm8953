/*
 * Copyright (c) 2015-2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/kernel.h>
#include <asm/mach/arch.h>
#ifdef CONFIG_SEC_DEBUG
#include <linux/sec_debug.h>
#endif
#include "board-dt.h"

static const char *msm8917_dt_match[] __initconst = {
	"qcom,msm8917",
	"qcom,apq8017",
	NULL
};

static void __init msm8917_init(void)
{
#ifdef CONFIG_SEC_DEBUG
	sec_debug_init();
#endif
	board_dt_populate(NULL);
}

DT_MACHINE_START(MSM8917_DT,
	"Qualcomm Technologies, Inc. MSM 8917 (Flattened Device Tree)")
	.init_machine = msm8917_init,
	.dt_compat = msm8917_dt_match,
MACHINE_END
