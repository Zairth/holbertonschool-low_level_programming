#include "main.h"

/**
*print_number - prints an integer.
*@n: the integer to print
*Return: void return
*/
void print_number(long n)
{
	long unite = 0, dizaine = 0, centaine = 0, millier = 0, dizaine_millier = 0;
	long centaine_millier = 0, million = 0, dizaine_million = 0;
	long centaine_million = 0, milliard = 0;
	long new_n = n;

	if (new_n < 0)
	{
		new_n = new_n * (-1);
		_putchar('-');
	}
	if (new_n >= 1000000000)
	{
		milliard = new_n / 1000000000;
		_putchar(milliard + '0');
	}
	if (new_n >= 100000000)
	{
		centaine_million = (new_n % 1000000000) / 100000000;
		_putchar(centaine_million + '0');
	}
	if (new_n >= 10000000)
	{
		dizaine_million = (new_n % 100000000) / 10000000;
		_putchar(dizaine_million + '0');
	}
	if (new_n >= 1000000)
	{
		million = (new_n % 10000000) / 1000000;
		_putchar(million + '0');
	}
	if (new_n >= 100000)
	{
		centaine_millier = (new_n % 1000000) / 100000;
		_putchar(centaine_millier + '0');
	}
	if (new_n >= 10000)
	{
		dizaine_millier = (new_n % 100000) / 10000;
		_putchar(dizaine_millier + '0');
	}
	if (new_n >= 1000)
	{
		millier = (new_n % 10000) / 1000;
		_putchar(millier + '0');
	}
	if (new_n >= 100)
	{
		centaine = (new_n % 1000) / 100;
		_putchar(centaine + '0');
	}
	if (new_n >= 10)
	{
		dizaine = (new_n % 100) / 10;
		_putchar(dizaine + '0');
	}
	unite = new_n % 10;
	_putchar(unite + '0');
}
