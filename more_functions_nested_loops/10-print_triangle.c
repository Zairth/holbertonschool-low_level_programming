#include "main.h"

/**
*print_triangle - prints a triangle, followed by a new line.
*@size: the size of the triangle
*Return: return void
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size - 1; j++)
				_putchar(' ');
			for (k = 0; k <= i; k++)
				_putchar('#');
			if (i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
