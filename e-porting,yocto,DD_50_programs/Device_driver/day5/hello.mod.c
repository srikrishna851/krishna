#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
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
__used __section("__versions") = {
	{ 0x7544dcc, "module_layout" },
	{ 0x71a7793, "class_destroy" },
	{ 0x326aa93d, "device_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x92997ed8, "_printk" },
	{ 0x79adec80, "device_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8ff4b512, "__class_create" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CB9C0A42BE6C17A1823AFCD");
