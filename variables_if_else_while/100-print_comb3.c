#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, i;

	for (n = 0; n <= 9; n++)
	{
		for (i = n; i <= 9; i++)
		{
			if (n != i)
			{
				putchar(n + '0');
				putchar(i + '0');
				if (n != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
