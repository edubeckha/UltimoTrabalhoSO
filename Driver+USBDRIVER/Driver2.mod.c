#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb89a34a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5fb86d2d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2fc58768, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x59bff344, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xe7a576e6, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xaae5c78b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbfc26d1c, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x22248301, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf22449ae, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0781p5567d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "333F3485E6583E5B78C3279");
