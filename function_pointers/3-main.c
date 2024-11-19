#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int (*operation)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	printf("%d", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
