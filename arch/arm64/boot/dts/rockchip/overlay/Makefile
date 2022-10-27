# SPDX-License-Identifier: GPL-2.0
dtbo-$(CONFIG_ARCH_ROCKCHIP) += \
	at24c02.dtbo \
	console-on-ttyS4.dtbo \
	console-on-ttyS2.dtbo \
	cpufreq.dtbo \
	devspi1.dtbo \
	devspi2.dtbo \
	imx219.dtbo \
	pcie-gen2.dtbo \
	radxa-keyz-typec-dp.dtbo \
	rk3399-rock-pi-4c-plus-radxa-10p1inch-display.dtbo \
	spi1-waveshare35c.dtbo \
	spi1-waveshare35b-v2.dtbo \
	spi1-flash.dtbo \
	spi1-mcp2515-can0.dtbo \
	two-color-led.dtbo \
	w1-gpio4-30.dtbo

scr-$(CONFIG_ARCH_ROCKCHIP) += \
	rockchip-fixup.scr

dtbotxt-$(CONFIG_ARCH_ROCKCHIP) += \
	README.rockchip-overlays

targets += $(dtbo-y) $(scr-y) $(dtbotxt-y)

always			:= $(dtbo-y) $(scr-y) $(dtbotxt-y)
clean-files		:= *.dtbo *.scr

