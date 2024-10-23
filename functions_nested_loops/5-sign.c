#include "main.h"

/**
*print_sign - verify the value of a number
*@n: variable that contain the number to verify
*Return: return 1, 0 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
