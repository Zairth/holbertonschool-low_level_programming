#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: number of parameter
 *@argv: the array of parameter
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
