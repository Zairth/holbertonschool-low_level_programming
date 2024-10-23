#include "main.h"

/**
  * _islower - checks the variable 'c' for lowercase character 
  *
  * Return: void
  */
int _islower(int c)
{
	if ((c + '0') >= 97 && (c + '0') <= 122)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('1');
		_putchar('\n');
		return (1);
	}
}
