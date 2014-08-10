/*
 * inso.c
 *
 *  Created on: 2014年6月24日
 *      Author: boyliang
 */

#include <stdio.h>
#include "inso.h"

static int gA = 1;

void setA(int i){
	gA = i;
}

int getA(){
	return gA;
}
