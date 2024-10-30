#include "main.h"

/**
*puts2 - prints every even character starting with 0.
*@str: string variable
*Return: no return, void function
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || i % 2 == 0)
		{
			if (str[i] != '\0')
				_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
