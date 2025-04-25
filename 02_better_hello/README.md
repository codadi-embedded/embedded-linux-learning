Important Command:

1. modinfo <module_name.ko>
    > This will shows all information present in the module.

2. sudo insmod <module_name.ko>
    > This will insert the kernel module.

3. lsmod
    > This will list down all the module in a kernel
    
    lsmod | grep <module_name>
    > This will make a pipeline and search only for the text given after grep

4. sudo dmesg
    > This is shows all the kernel logs
    
    sudo dmesg | tail
    > This will make a pipeline and shows only last 10 logs.
    
    sudo dmesg | tail -n 1
    > This will make a pipeline and shows only one log as specified after -n.

    sudo dmesg -W
    > This will shows the latest log trigger by any activity.

    sudo dmesg -w
    > This will all the previous log and then shows the latest log trigger by any activity.

5. tmux
    > To open a new terminal to work on
        . cntl + b + % : To spilt the terminal vertically
        . cntl + b + o : To switch to next pane
