#include "main.h"

/**
*print_number - prints an integer.
*@n: the number to print
*Return: void return
*/
void print_number(int n)
{
	int MIN_hit = 0;
	int count = 8;
	int modulo = 1000000000;
	int division = 100000000;

	if (n == -2147483648)
	{
		n++;
		MIN_hit++;
	}
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	if (n > modulo)
		_putchar((n / 1000000000) + '0');
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
		_putchar(((n % modulo) / division) + '0');
		modulo /= 10;
		division /= 10;
		count--;
	}
	n %= 10;
	if (MIN_hit == 1)
		n++;
	_putchar(n + '0');
}
