#include "main.h"
#include <stdio.h>

/**
*rev_string - reverses a string
*@s: string to reverse
*Return: no return, void function
*/
void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	while (s[i] != '\0')
		i++;
	for (j = 0; j <= i - 1; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i - 1];
		s[i - 1] = tmp;
	}
}
