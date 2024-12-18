#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
*op_add - addition operation
*@a: the int
*@b: the int
*Return: int return
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - soustraction operation
*@a: the int
*@b: the int
*Return: int return
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplication operator
*@a: the int
*@b: the int
*Return: int return
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - division operation
*@a: the int
*@b: the int
*Return: int return
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
*op_mod - modulo operation
*@a: the int
*@b: the int
*Return: int return
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
