#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int first_modulo = 2;
	long n = 612852475143;
	long new_n = n;

	while (new_n != 1)
	{
		if (n % first_modulo == 0)
			new_n /= first_modulo;
		else
			first_modulo += 1;
	}
	printf("%ld", new_n);
	return (0);
}
