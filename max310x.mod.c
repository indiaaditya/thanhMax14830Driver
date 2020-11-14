#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xd6f3c647, "module_layout" },
	{ 0x71865907, "uart_unregister_driver" },
	{ 0xf6211ea9, "driver_unregister" },
	{ 0x4605f889, "__spi_register_driver" },
	{ 0xba0dd8b6, "uart_register_driver" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x2df00fd5, "do_SAK" },
	{ 0x7ae2a45b, "tty_flip_buffer_push" },
	{ 0x4bdb2cc2, "uart_insert_char" },
	{ 0x7da0d8d2, "uart_handle_cts_change" },
	{ 0xe9796174, "uart_write_wakeup" },
	{ 0x417d2127, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x9e88d363, "_dev_warn" },
	{ 0x7e6427d1, "devm_request_threaded_irq" },
	{ 0x220d3bf2, "devm_gpiochip_add_data" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5d91419f, "uart_add_one_port" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x23678785, "spi_get_device_id" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x523495b4, "devm_clk_get" },
	{ 0x1bcf97d8, "devm_kmalloc" },
	{ 0xaf34d8af, "__devm_regmap_init_spi" },
	{ 0xf2b34df8, "of_match_device" },
	{ 0x9e2da686, "spi_setup" },
	{ 0x16e08e49, "uart_update_timeout" },
	{ 0xe938ee26, "uart_get_baud_rate" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8ec6b51e, "gpiochip_get_data" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xfbe7f73, "uart_remove_one_port" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x35b867cf, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb76cb3b, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca97bad5, "regmap_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x52b113dc, "regmap_update_bits_base" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:max3107");
MODULE_ALIAS("spi:max3108");
MODULE_ALIAS("spi:max3109");
MODULE_ALIAS("spi:max14830");
MODULE_ALIAS("of:N*T*Cmaxim,max3107");
MODULE_ALIAS("of:N*T*Cmaxim,max3107C*");
MODULE_ALIAS("of:N*T*Cmaxim,max3108");
MODULE_ALIAS("of:N*T*Cmaxim,max3108C*");
MODULE_ALIAS("of:N*T*Cmaxim,max3109");
MODULE_ALIAS("of:N*T*Cmaxim,max3109C*");
MODULE_ALIAS("of:N*T*Cmaxim,max14830");
MODULE_ALIAS("of:N*T*Cmaxim,max14830C*");

MODULE_INFO(srcversion, "1667E0D4B936BE10EFFEE2D");
