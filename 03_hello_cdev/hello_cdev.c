#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Codadi");
MODULE_DESCRIPTION("A simple hello from kernel linux kernel module");

static int my_init(void);
static void my_exit(void);

static ssize_t my_read(struct file *f, char __user *u, size_t l, loff_t *o){
	printk("hello_cdev - Read is called\n");
	return 0;
}


static int major;
static struct file_operations fops = {
	.read = my_read
};


static int __init my_init(void){
	major = register_chrdev(0, "hello_cdev", &fops);
	if(major < 0){
		printk("hello_cdev - Error registering chrdev\n");
		return major;
	}

	printk("Hello from cdev! - Major Device number: %d\n", major);
	return 0;
}


static void __exit my_exit(void){
	unregister_chrdev(major, "hello_cdev");
	printk("Test completed, logging out from kernel\n");
}


module_init(my_init);
module_exit(my_exit);

