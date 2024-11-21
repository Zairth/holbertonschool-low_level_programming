#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - prints strings, followed by a new line
*@separator: string to be printed between strings
*@n: number of argument
*@...: variadic arguments initialization
*Return: void return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char *);

		if (separator != NULL && i < n - 1)
			printf("%s%s", strings, separator);
		else
			printf("%s", strings);
	}
	va_end(args);
	printf("\n");
}
