#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	unsigned long int n0 = 0, n1 = 1;
	unsigned long int result = 0;

	for (i = 0; i < 50; i++)
	{
		result = n0 + n1;
		n0 = n1;
		n1 = result;
		printf("%lu", result);
			if (i != 49)
				printf(", ");
	}
	printf("\n");
}
