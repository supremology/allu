/*
 * plat.c
 *
 *  Created on: 10-Jun-2019
 *      Author: Admin
 */

#include <stdio.h>
#include "com_stack.h"
//#include "std.h"

int main()
{
	uint8 a[5]={0, 1, 2, 3, 4};
	uint32 i;

	for(i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("%X, %X\n",E_OK, E_NOT_OK);

	for(i= STD_LOW; i<=STD_ACTIVE; i++)
	{
		printf("%d\n", i);
	}
	printf("hello world\n");

	if(TRUE==1)
		printf("correct\n");
	else
		printf("incorrect\n");


	return 0;
}
