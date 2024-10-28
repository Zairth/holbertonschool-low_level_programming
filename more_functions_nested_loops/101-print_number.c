#include "main.h"

/**
*print_number - prints an integer.
*@n: the integer to print
*Return: void return
*/
void print_number(int n)
{
	int unite = 0, dizaine = 0, centaine = 0, millier = 0, dizaine_millier = 0, centaine_millier = 0, million = 0, dizaine_million = 0, centaine_million = 0, milliard = 0;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	if (n >= 1000000000)
	{
		milliard = n / 1000000000;
		_putchar(milliard + '0');
	}
	if (n >= 100000000)
	{
		centaine_million = (n % 1000000000) / 100000000;
		_putchar(centaine_million + '0');
	}
	if (n >= 10000000)
	{
		dizaine_million = (n % 100000000) / 10000000;
		_putchar(dizaine_million + '0');
	}
	if (n >= 1000000)
	{
		million = (n
	}
	if (n >= 1000)
	{
		millier = n / 1000;
		_putchar(millier + '0');
	}
	if (n >= 100)
	{
		centaine = (n % 1000) / 100;
		_putchar(centaine + '0');
	}
	if (n >= 10)
	{
		dizaine = (n % 100) / 10;
		_putchar(dizaine + '0');
	}
	unite = n % 10;
	_putchar(unite + '0');
}
