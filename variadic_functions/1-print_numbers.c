#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*into_str - Convertit un entier en chaîne de caractères
*@n: L'entier à convertir
*@str: Tableau de caractères pour stocker la chaîne de caractères
*Return: void return
*/
void into_str(int n, char *str)
{
	int MIN_hit = 0, count = 8, modulo = 1000000000;
	int division = 100000000;
	int i = 0;

	if (n == -2147483648)
	{
		n++;
		MIN_hit++;
	}
	if (n < 0)
	{
		n = n * (-1);
		str[i++] = '-';
	}
	if (n != 0)
	{
		if (n > modulo)
			str[i++] = (n / 1000000000) + '0';
		else
		{
			while (modulo / 10 > n)
			{
				modulo /= 10;
				division /= 10;
				count--;
			}
		}
		while (count != 0)
		{
			str[i++] = ((n % modulo) / division) + '0';
			modulo /= 10;
			division /= 10;
			count--;
		}
		n %= 10;
	}
	if (MIN_hit == 1)
		n++;
	str[i++] = n + '0';
	str[i] = '\0';
}

/**
*print_numbers - return the sum of all variadic argument
*@separator: string to be printed between numbers
*@n: number of argument
*@...: variadic arguments initialization
*Return: void return
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;
	char str[12];
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(args, int);

		/* Convertit l'entier en chaîne */
		into_str(numbers, str);

		/* if not last number, imprime le nombre suivi du séparateur */
		if (separator != NULL && i < n - 1)
			printf("%s%s", str, separator);
		else
			printf("%s", str); /* if last number, imprime seulement le nombre */
	}
	va_end(args);
	printf("\n");
}
