#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, i, j;

	for (n = 0; n <= 9; n++)
	{
		for (i = n; i <= 9; i++)
		{
			for (j = i; j <= 9; j++)
			{
				if (n != i && i != j)
				{
					putchar(n + '0');
					putchar(i + '0');
					putchar(j + '0');

					if (n != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
