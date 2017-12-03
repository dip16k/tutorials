#include<stdio.h>

#include"mul.h"
#include"add.h"

int main()
{
	int a, b;

	a = 10;
	b = 20;

	printf("add(%d,%d) = %d\n",a,b,add(a,b));

	printf("mul(%d,%d) = %d\n",a,b,mul(a,b));
	
	return 0;
}
