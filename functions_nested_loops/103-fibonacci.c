#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	unsigned long int n0 = 0, n1 = 1, even_sum = 0;
	unsigned long int result = 0;

	while (result <= 4000000)
	{
		result = n0 + n1;
		n0 = n1;
		n1 = result;
		if (
		printf("%lu", result);
	}
	printf("\n");
}
