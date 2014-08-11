Injection By Ptrace
===================

The demo source of injection_by_ptrace.


##Install
There are two part, one is excutable file called **demo1**, anthor is  dynamic library call **libmyso.so**.

- the source of demo1
	- firstly, build the dynamic library **libinso.so**
		- inso.c
		- inso.h
	- secondly, the build **demo1** using **libinso.so** 
		- demo1.c
		- log.h
- the source of libmyso.so
	- myso.cpp
	- myso.h
	
In the end, we get three files: demo1, libinso.so, libmyso.so.
	
##Usage
First of all, you should build the [poison](https://github.com/boyliang/Poison). According to the following steps:

- push poison, demo1, libinso.so, libmyso.so to /data/local/tmp/ via adb;
- the connect to the device or emulator via adb, then cd to /data/local/tmp;
- chmod 755 *;
- LD_LIBRARY_PATH=. ./demo1&;
- so you get the demo1' pid, we call it DEMO1_PID;
- ./poison /data/local/tmp/libmyso.so DEMO1_PID;

That is all.
