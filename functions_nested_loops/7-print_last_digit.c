#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*@i: variable that contain the number
*Return: return the last digit
*/
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = i % 10;
		i = i * (-1);
	} else
		i = i % 10;
	_putchar(i + '0');
	return (i);
}
