#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n0 = 0, n1 = 1;
	unsigned long int result = 0, sum = 0;

	while (result < 4000000)
	{
		result = n0 + n1;
		n0 = n1;
		n1 = result;
		if (result % 2 == 0)
			sum += result;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
