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
	{ 0x14a5138c, "param_ops_int" },
	{ 0x60244248, "param_ops_charp" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "86BA840132D3A0A55931F38");
