#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int n0 = 0, n1 = 1;
	unsigned long int result = 0;

	for (i = 0; i <= 98; i++)
	{
		result = n0 + n1;
		n0 = n1;
		n1 = result;
		printf("%lu", result);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
