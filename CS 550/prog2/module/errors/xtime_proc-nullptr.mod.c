#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x72126245, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbef952eb, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x679a5856, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d463de2, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe00840bf, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x5f2ea640, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0x88384b83, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x7c87c514, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

