#include "main.h"

/**
  * _islower - checks for lowercase character
  * c is the variable where i put the character
  * Return: void
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
