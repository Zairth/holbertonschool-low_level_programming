#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *@argc: number of parameter
 *@argv: the array of parameter
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
		printf("%s\n", argv[0]);

	while (i <= argc)
		i++;
		
	printf("%d\n", i);
	return (0);
}


