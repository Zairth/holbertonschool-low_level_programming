#include "main.h"

/**
*puts_half - prints half of a string, followed by a new line
*@str: string variable
*Return: no return, void function
*/
void puts_half(char *str)
{
	int i = 0, n = 0, middle = 0;

	while (str[i] != '\0')
		i++;

	n = i - 1;
	middle = n / 2;

	if (middle % 2 == 0)
		middle++;

	while (middle <= n)
	{
		_putchar(str[middle]);
		middle++;
	}
	_putchar('\n');
}
