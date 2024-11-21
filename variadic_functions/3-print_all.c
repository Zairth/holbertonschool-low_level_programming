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
	int hint, i = 0, acc_format;
	char charr;
	char *str;
	float floot;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		acc_format = 0;
		if (format[i] == 'c')
		{
			charr = va_arg(args, int);
			printf("%c", charr);
			acc_format++;
		}
		else if (format[i] == 'i')
		{
			hint = va_arg(args, int);
			printf("%d", hint);
			acc_format++;
		}
		else if (format[i] == 'f')
		{
			floot = va_arg(args, double);
			printf("%f", floot);
			acc_format++;
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char*);
			printf("%s", str);
			acc_format++;
		}

		if ((str == NULL || format[i + 1] != '\0') && (acc_format > 0))
		{
			printf(", ");
			str = "(nil)";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
