#include "main.h"

/**
*print_times_table - prints n times table, starting with 0.
*@n: number that define the times to prints the times table
*Return: no return, just a void function
*/
void print_times_table(int n)
{
	int i, j, result;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j != n + 1 && j != 0)
					_putchar(' ');
				if (j != n + 1 && j != 0 && result < 100)
					_putchar(' ');
				if (j != n + 1 && j != 0 && result < 10)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
					if (j != n)
						_putchar(',');
				}
				else if (result >= 10)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
					if (j != n)
						_putchar(',');
				}
				else
				{
					_putchar(result + '0');
					if (j != n)
						_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
