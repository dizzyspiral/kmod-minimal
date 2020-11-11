#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/* This is the initialization function for the kernel module. It 
 * is run when the kernel module is loaded - when you're 
 * developing a kernel module, you're probably loading it with 
 * insmod <your compiled .ko file>. In that case, this function 
 * is being called right after you invoke that command. For lots 
 * of kernel modules, and probably for your finished kernel module, 
 * your module will be automatically loaded at boot, and so this 
 * intialization function will be called when the machine first boots.
*/
int __init kmod_init(void){
    /* A return value of 0 lets the kernel know that your module 
     * initialized without errors. Anything else is an error.
     */
    return 0;
}


void __exit kmod_exit(void){
}

/* The module_init function is provided by linux/init.h, included 
 * at the top of the file. This function call takes a pointer to 
 * a function and registers that function as this kernel module's 
 * initialization function. The initialization function should be 
 * declared with the __init macro to keep the kernel happy. For 
 * more information on that, see 
 * https://stackoverflow.com/questions/8832114/what-does-init-mean-in-the-linux-kernel-code
 */
module_init(kmod_init);
module_exit(kmod_exit);

MODULE_LICENSE("MIT");

