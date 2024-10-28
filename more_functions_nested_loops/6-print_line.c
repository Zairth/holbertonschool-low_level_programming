#include "main.h"

/**
*print_line - prints n times underscore character to create a line
*@n: the width of the line
*Return: return void
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
