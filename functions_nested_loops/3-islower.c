#include "main.h"

/**
  * _islower - checks for lowercase character
  * c is the variable where i put the character
  * Return: void
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
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
