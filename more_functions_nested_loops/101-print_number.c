#include "main.h"

/**
*print_number - prints an integer.
*@n: the integer to print
*Return: void return
*/
void print_number(int n)
{
	int unite = 0, dizaine = 0, centaine = 0, millier = 0;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	if (n >= 1000 || n <= -1000)
	{
		millier = n / 1000;
		_putchar(millier + '0');
	}
	if (n >= 100 || n <= -100)
	{
		centaine = (n % 1000) / 100;
		_putchar(centaine + '0');
	}
	if (n >= 10 || n <= -10)
	{
		dizaine = (n % 100) / 10;
		_putchar(dizaine + '0');
	}
	unite = n % 10;
	_putchar(unite + '0');
}
