#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>

asmlinkage long sys_cs3753_add(int a, int b, int* result) {

        int sum;
        //int *sp = &sum;
        sum = a + b;
        printk(KERN_ALERT "%d + ", a);
        printk(KERN_ALERT "%d = ", b);
        printk(KERN_ALERT "%d\n", sum);
	put_user(sum, result);
        return 0;

}

