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
	int i, j, result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	} else
		printf("0\n");

	return (0);
}
