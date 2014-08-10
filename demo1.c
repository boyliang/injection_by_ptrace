/*
 * demo1.c
 *
 *  Created on: 2014年6月24日
 *      Author: boyliang
 */

#include <stdio.h>
#include <unistd.h>

#include "inso.h"
#include "log.h"

int main(){

	LOGI("DEMO1 start.");

	while(1){
		LOGI("%d", getA());
		setA(getA() + 1);
		sleep(2);
	}

	return 0;
}
