#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all - return the sum of all variadic argument
*@n: number of variadic argument
*@...: variadic arguments initialization
*Return: int return
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int somme = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		somme += va_arg(args, unsigned int);
	}
	return (somme);
}
