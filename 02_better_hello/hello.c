#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Codadi");
MODULE_DESCRIPTION("A simple hello from kernel linux kernel module");

static int my_init(void);
static void my_exit(void);

static int __init my_init(void){
	printk("Hello from kernel!\n");
	return 0;
}


static void __exit my_exit(void){
	printk("Test completed, logging out from kernel\n");
}


module_init(my_init);
module_exit(my_exit);

