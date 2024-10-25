#include "main.h"
#include <stdio.h>

/**
 * fibonacci_50_numbers - prints the first 50 Fibonacci numbers
 *@void: no variable
 *Return: no return
**/
void fibonacci_50_numbers(void)
{
	int i, j, fibo;

	for (i = 1; i <= 50; i++)
	{
		for (j = n + 1; j >= i; j--)
		{
			printf("%d\n", i + j);
		}
	}
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
