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
	int n0 = 1, n1 = 2;
	int result = 0;

	for (i = 0; i <= 50; i++)
	{
		result = n0 + n1;
		for (j = 1 + i; j != i; j--)
		{
			n0 = n1;
			printf("%d", result);
			if (i != 50)
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
