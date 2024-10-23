#include "main.h"

/**
*_abs - puts the absolute value of a number
*@n: variable that contain the number to convert
*Return: always return 0
*/
int _abs(int n)
{
	if (n < 0)
		n *= (-1);
	_putchar(n);
	return (0);
}
