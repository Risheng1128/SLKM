/* 
 * slkm.c - The simplest kernel module. 
 */ 
#include <linux/kernel.h> /* Needed for pr_info() */ 
#include <linux/module.h> /* Needed by all modules */ 
 
int init_module(void) 
{ 
    pr_info("Hello world.\n"); 
    return 0; 
} 
 
void cleanup_module(void) 
{ 
    pr_info("Goodbye world.\n"); 
} 

MODULE_LICENSE("GPL");