/*
 * teststack.c
 *
 *  Created on: 15 mar 2023
 *      Author: jluis
 */
#include <stdio.h>
#include <string.h>
#include "stack.h"

int main()
{
	STACK s1 = stack_create();	// Crear un stack
	char s[20];
	char *str;

	setbuf(stdout,NULL);

	while(1)
	{
		printf("Dame un nombre (FIN para terminar) ");
		scanf("%s",s);
		if(strcmp(s,"FIN")!=0)
			stack_push(s1,string_create(s));
		else
			break;
	}

	while(!stack_empty(s1))
	{
		str = stack_pop(s1);
		printf("%s\n",str);
	}

	stack_destroy(s1);
}

