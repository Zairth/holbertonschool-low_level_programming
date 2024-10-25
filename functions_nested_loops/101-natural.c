#include "main.h"
#include <stdio.h>

/**
 * multiple_of_3_5 - print the sum of all the multiple of 3 and 5 below 1024
 *@void: no variable
 *Return: no return
**/
void multiple_of_3_5(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	multiple_of_3_5();
	return (0);
}
