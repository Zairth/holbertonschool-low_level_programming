#include "main.h"

/**
*_isalpha - checks for alphabetic character
*@c: character that contain the value to verify
*Return: return 1 if it is a character, otherwise return 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
