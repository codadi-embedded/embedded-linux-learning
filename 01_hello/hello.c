#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");


int my_init(void);
void my_exit(void);

int my_init(void){
	printk("Hello from kernel!\n");
	return 0;
}


void my_exit(void){
	printk("Test completed, logging out from kernel\n");
}


module_init(my_init);
module_exit(my_exit);

