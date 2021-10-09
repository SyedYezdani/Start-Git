/**
 * simple.c
 *
 * Linux OS Micro-Project 1
 *
 * Basic linux kernel programming, that contains simple.c
 * 
 * To compile and run makefile by entering "make"
 *
 * I pledge that I have acted honorably by completing this assignment.
 *
 * Name : Syed Yezdani
 *
 * Date: 10/08/2021
 *
 * Operating System Concepts - 10th Edition
 * Copyright John Wiley & Sons - 2018
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

/* This function is used to load the module. */
static int simple_init(void)
{
       printk(KERN_INFO "Loading Module\n");

       return 0;
}

/* This function is used to remove the module. */
static void simple_exit(void) {
	printk(KERN_INFO "Removing Module\n");
}

/* Macros for registering module entry and exit points. */
module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("Abraham Silberschatz, Greg Gagne, Peter B Galvin");
