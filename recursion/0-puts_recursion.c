#include "main.h"
/**
*print_diagsums - prints a string, followed by a new line.
*@s: the string to print
*Return: no return, void function
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
