/*
 * myso.c
 *
 *  Created on: 2014年6月24日
 *      Author: boyliang
 */

#include <stdio.h>
#include <stddef.h>
#include <dlfcn.h>
#include <pthread.h>
#include <stddef.h>

#include  "log.h"

__attribute__ ((__constructor__))
void Main() {
	LOGI(">>>>>>>>>>>>>I am in, I am a bad boy 1!!!!<<<<<<<<<<<<<<");

	void* handle = dlopen("libinso.so", RTLD_NOW);
	void (*setA_func)(int) = (void (*)(int))dlsym(handle, "setA");

	if (setA_func) {
		setA_func(999);
	}
}
