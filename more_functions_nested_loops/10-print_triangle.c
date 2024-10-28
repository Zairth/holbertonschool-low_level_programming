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
		for (i = size; i >= size; i--)
		{
			for (j = i - 1; j >= 0; j--)
				_putchar(' ');
			for (k = size; k > j; k--)
				_putchar('#');
			if (i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
