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
void print_all(const char *const format, ...)
{
	f_type fonc_type[] = {
		{'c', charr},
		{'i', intt},
		{'f', floatt},
		{'s', string},
		{0, NULL}
	};
	int i = 0, j;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (fonc_type[j].acc_format != 0)
		{
			if (fonc_type[j].acc_format == format[i])
			{
				fonc_type[j].f(args);
				printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 *charr - print a char
 *@args: the char to print
 *Return: void return
 */
void charr(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 *intt - print an int
 *@args: the int to print
 *Return: void return
 */
void intt(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 *floatt - print a float
 *@args: the float to print
 *Return: void return
 */
void floatt(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 *string - print a string
 *@args: the string to print
 *Return: void return
 */
void string(va_list args)
{
	char *str = NULL;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
