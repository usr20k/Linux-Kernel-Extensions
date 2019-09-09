# Linux-Kernel-Extensions
Kernel extensions for CS3753

## What's In Each File

### cs3753_add.c
This file contains a system call that takes in two integers and a pointer to an int and returns the sum of the first two arguments at the location provided by the pointer parameter.  Should be located in `arch/x86/kernel` of standard build tree.

### helloworld.c
This file contains a system call that prints "hello world" to the kernel log.  Should be located in `arch/x86/kernel` of standard build tree.

### Makefile
This is the Makefile for the linux kernel with new entries for helloworld.c and cs3753_add.c.  Should be located in `arch/x86/kernel` of standard build tree.

### syscall_64.tbl
This is a table containing all of the linux system calls with our two new function appended as entries 333 and 334.  Should be located in `arch/x86/entry/syscalls/` of standard build tree.

### syscalls.h
This is our header file for all system calls with declarations for our two new system calls.  Should be located in `include/linux` of standard build tree.

### syscall_test.c
This is a simple c program that will call our two new system calls and indicate if they were successful or not.

### syslog
This is a copy of the linux system log immediatly following execution of syscall_test program.

## Building and running syscall_test
To build and run the syscall_test program open a terminal and run `sudo gcc syscall_test.c -o syscall_test` the folder containing syscall_test.c.  To run the program run `./syscall_test` in your terminal in the same folder.
