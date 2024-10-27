#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i, count;
	unsigned long int n0 = 0, n1 = 1;
	unsigned long int result = 0;
	unsigned long int n0_start, n0_end, n1_start, n1_end;

	for (i = 0; i <= 98; i++)
	{
		count++;
		result = n0 + n1;
		n0 = n1;
		n1 = result;

		if (count <= 93)
			printf("%lu", result);
		else 
		{
			n0_start = n0 % 10000000;
			n0_end = n0 / 10000000;
			n1_start = n1 % 10000000;
			n1_end = n1 / 10000000;

		}
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
