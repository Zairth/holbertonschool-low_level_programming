#include "main.h"
#include <stdio.h>

/**
 * fibonacci_50_numbers - prints the first 50 Fibonacci numbers
 *@void: no variable
 *Return: no return
**/
void fibonacci_50_numbers(void)
{
	int i, j;
	unsigned long int n0 = 0, n1 = 1;
	unsigned long int result = 0;

	for (i = 0; i < 50; i++)
	{
		result = n0 + n1;
		for (j = 1 + i; j != i; j--)
		{
			n0 = n1;
			printf("%lu", result);
			if (i != 49)
				printf(", ");
		}
		n1 = result;
	}
	printf("\n");
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	fibonacci_50_numbers();
	return (0);
}
