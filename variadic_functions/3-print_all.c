#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_all - Write a function that prints anything.
*@format: the format to print
*@...: variadic arguments initialization
*Return: void return
*/
void print_all(const char * const format, ...)
{	
	int i = 0;
	char charr;
	char *str;
	int hint;
	float floot;
	va_list args;
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			charr = va_arg(args, int);
			printf("%c", charr);
		}
		else if (format[i] == 'i')
		{
			hint = va_arg(args, int);
			printf("%d", hint);
		}
		else if (format[i] == 'f')
		{
			floot = va_arg(args, double);
			printf("%f", floot);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char*);
			printf("%s", str);
		}

		if (str == NULL || format[i + 1] != '\0')
		{
			printf(", ");
			str = "(nil)";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
