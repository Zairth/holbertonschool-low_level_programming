#include "main.h"
/**
*_print_rev_recursion - prints a string in reverse.
*@s: the string to reverse print
*Return: no return, void function
*/
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s - 1);

	_print_rev_recursion(s + 1);
}
