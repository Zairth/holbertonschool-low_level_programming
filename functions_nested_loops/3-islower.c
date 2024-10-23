#include "main.h"

/**
*_islower - checks for lowercase character
*@c: character that contain the value to verify
*Return: return 1 if is lowercase, otherwise return 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
