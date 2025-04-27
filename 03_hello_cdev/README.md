Learnings:

To register a char device driver
    > register_chrdev(<major number>, "driver name", <pointer to file operations>);
    This function will return major number.
    Where, *major number* can be 0 to 255, whichever is available. 0 means, kernel
    will assign any avilable major number.
    *driver name* can be anything and
    *pointer to file operations* will be an structure variable to a pre-define
    structure called *stuct file_operations <name> {};*
    
To unregister a char device driver or module
    > ungister_chrdev(<major number>, "driver name");


How to test the code:
    1. make
    2. sudo insmod hello_cdev.ko -> sudo dmesg -W
    3. sudo mknod /dev/hello0 c major minor -> sudo dmesg -W
    4. sudo cat /dev/hello0 -> since, only read operation is there in the code
    5. sudo rmmod hello_cdev.ko
    6. Make sure to remove the device file -> sudo rm /dev/hello0
