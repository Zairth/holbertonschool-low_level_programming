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
	long unsigned int n0 = 1, n1 = 2;
	long unsigned int result = 0;

	for (i = 0; i <= 47; i++)
	{
		result = n0 + n1;
		for (j = 1 + i; j != i; j--)
		{
			n0 = n1;
			printf("%lu", result);
			if (i != 47)
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
