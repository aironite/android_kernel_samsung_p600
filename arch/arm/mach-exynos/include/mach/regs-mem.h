/* linux/arch/arm/mach-exynos4/include/mach/regs-mem.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS4 - SROMC and DMC register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_REGS_MEM_H
#define __ASM_ARCH_REGS_MEM_H __FILE__

#include <mach/map.h>

#define EXYNOS_DREXI_0_REG(x)		(S5P_VA_DREXI_0 + (x))
#define EXYNOS_DREXI_1_REG(x)		(S5P_VA_DREXI_1 + (x))

#define EXYNOS5_DREXI_0_DIRECTCMD	EXYNOS_DREXI_0_REG(0x0010)
#define EXYNOS5_DREXI_0_TIMINGAREF	EXYNOS_DREXI_0_REG(0x0030)
#define EXYNOS5_DREXI_0_TIMINGROW0	EXYNOS_DREXI_0_REG(0x0034)
#define EXYNOS5_DREXI_0_TIMINGDATA0	EXYNOS_DREXI_0_REG(0x0038)
#define EXYNOS5_DREXI_0_TIMINGPOWER0	EXYNOS_DREXI_0_REG(0x003C)
#define EXYNOS5_DREXI_0_MRSTATUS	EXYNOS_DREXI_0_REG(0x0054)
#define EXYNOS5_DREXI_0_QOSCONTROL8	EXYNOS_DREXI_0_REG(0x00A0)
#define EXYNOS5_DREXI_0_QOSCONTROL12	EXYNOS_DREXI_0_REG(0x00C0)
#define EXYNOS5_DREXI_0_QOSCONTROL15	EXYNOS_DREXI_0_REG(0x00D8)
#define EXYNOS5_DREXI_0_BRBRSVCONTROL	EXYNOS_DREXI_0_REG(0x0100)
#define EXYNOS5_DREXI_0_BRBRSVCONFIG	EXYNOS_DREXI_0_REG(0x0104)
#define EXYNOS5_DREXI_0_BP_CONTROL0	EXYNOS_DREXI_0_REG(0x0210)
#define EXYNOS5_DREXI_0_BP_CONFIG0_R	EXYNOS_DREXI_0_REG(0x0214)
#define EXYNOS5_DREXI_0_BP_CONFIG0_W	EXYNOS_DREXI_0_REG(0x0218)
#define EXYNOS5_DREXI_0_BP_CONTROL1	EXYNOS_DREXI_0_REG(0x0220)
#define EXYNOS5_DREXI_0_BP_CONFIG1_R	EXYNOS_DREXI_0_REG(0x0224)
#define EXYNOS5_DREXI_0_BP_CONFIG1_W	EXYNOS_DREXI_0_REG(0x0228)
#define EXYNOS5_DREXI_0_BP_CONTROL2	EXYNOS_DREXI_0_REG(0x0230)
#define EXYNOS5_DREXI_0_BP_CONFIG2_R	EXYNOS_DREXI_0_REG(0x0234)
#define EXYNOS5_DREXI_0_BP_CONFIG2_W	EXYNOS_DREXI_0_REG(0x0238)
#define EXYNOS5_DREXI_0_BP_CONTROL3	EXYNOS_DREXI_0_REG(0x0240)
#define EXYNOS5_DREXI_0_BP_CONFIG3_R	EXYNOS_DREXI_0_REG(0x0244)
#define EXYNOS5_DREXI_0_BP_CONFIG3_W	EXYNOS_DREXI_0_REG(0x0248)

#define EXYNOS5_DREXI_1_DIRECTCMD	EXYNOS_DREXI_1_REG(0x0010)
#define EXYNOS5_DREXI_1_TIMINGAREF	EXYNOS_DREXI_1_REG(0x0030)
#define EXYNOS5_DREXI_1_TIMINGROW0	EXYNOS_DREXI_1_REG(0x0034)
#define EXYNOS5_DREXI_1_TIMINGDATA0	EXYNOS_DREXI_1_REG(0x0038)
#define EXYNOS5_DREXI_1_TIMINGPOWER0	EXYNOS_DREXI_1_REG(0x003C)
#define EXYNOS5_DREXI_1_MRSTATUS	EXYNOS_DREXI_1_REG(0x0054)
#define EXYNOS5_DREXI_1_QOSCONTROL8	EXYNOS_DREXI_1_REG(0x00A0)
#define EXYNOS5_DREXI_1_QOSCONTROL12	EXYNOS_DREXI_1_REG(0x00C0)
#define EXYNOS5_DREXI_1_QOSCONTROL15	EXYNOS_DREXI_1_REG(0x00D8)
#define EXYNOS5_DREXI_1_BRBRSVCONTROL	EXYNOS_DREXI_1_REG(0x0100)
#define EXYNOS5_DREXI_1_BRBRSVCONFIG	EXYNOS_DREXI_1_REG(0x0104)
#define EXYNOS5_DREXI_1_BP_CONTROL0	EXYNOS_DREXI_1_REG(0x0210)
#define EXYNOS5_DREXI_1_BP_CONFIG0_R	EXYNOS_DREXI_1_REG(0x0214)
#define EXYNOS5_DREXI_1_BP_CONFIG0_W	EXYNOS_DREXI_1_REG(0x0218)
#define EXYNOS5_DREXI_1_BP_CONTROL1	EXYNOS_DREXI_1_REG(0x0220)
#define EXYNOS5_DREXI_1_BP_CONFIG1_R	EXYNOS_DREXI_1_REG(0x0224)
#define EXYNOS5_DREXI_1_BP_CONFIG1_W	EXYNOS_DREXI_1_REG(0x0228)
#define EXYNOS5_DREXI_1_BP_CONTROL2	EXYNOS_DREXI_1_REG(0x0230)
#define EXYNOS5_DREXI_1_BP_CONFIG2_R	EXYNOS_DREXI_1_REG(0x0234)
#define EXYNOS5_DREXI_1_BP_CONFIG2_W	EXYNOS_DREXI_1_REG(0x0238)
#define EXYNOS5_DREXI_1_BP_CONTROL3	EXYNOS_DREXI_1_REG(0x0240)
#define EXYNOS5_DREXI_1_BP_CONFIG3_R	EXYNOS_DREXI_1_REG(0x0244)
#define EXYNOS5_DREXI_1_BP_CONFIG3_W	EXYNOS_DREXI_1_REG(0x0248)

#ifdef CONFIG_SOC_EXYNOS5420
#define EXYNOS5_DREXI_0_TIMINGROW1	EXYNOS_DREXI_0_REG(0x00E4)
#define EXYNOS5_DREXI_0_TIMINGDATA1	EXYNOS_DREXI_0_REG(0x00E8)
#define EXYNOS5_DREXI_0_TIMINGPOWER1	EXYNOS_DREXI_0_REG(0x00EC)

#define EXYNOS5_DREXI_1_TIMINGROW1	EXYNOS_DREXI_1_REG(0x00E4)
#define EXYNOS5_DREXI_1_TIMINGDATA1	EXYNOS_DREXI_1_REG(0x00E8)
#define EXYNOS5_DREXI_1_TIMINGPOWER1	EXYNOS_DREXI_1_REG(0x00EC)
#endif

#define S5P_DMC0_MEMCON_OFFSET		0x04

#define S5P_DMC0_MEMTYPE_SHIFT		8
#define S5P_DMC0_MEMTYPE_MASK		0xF

#define EXYNOS_DMC_TIMINGAREF_OFFSET	0x30
#define EXYNOS_DMC_TIMINGROW_OFFSET	0x34

#endif /* __ASM_ARCH_REGS_MEM_H */