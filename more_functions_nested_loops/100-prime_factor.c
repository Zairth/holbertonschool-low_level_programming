#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long first_modulo = 2;
	unsigned long n = 612852475143;

	while (n != 1)
	{
		if (n % first_modulo == 0)
			n /= first_modulo;
		else
			first_modulo += 1;
	}
	printf("%ld\n", first_modulo);
	return (0);
}
