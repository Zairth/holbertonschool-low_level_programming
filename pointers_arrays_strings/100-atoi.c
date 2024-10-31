#include "main.h"

/**
*_atoi - convert a string to an integer
*@s: the string character to convert into integer
*Return: return an int
*/
int _atoi(char *s)
{
	int i = 0, j = 0;
	int soustract = 0;
	int result = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			soustract++;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (j == 0)
		{
			result = s[i] - '0';
			j++;
		}
		else
			result = result * 10 + s[i] - '0';
		i++;
	}

	if (soustract % 2 != 0 && result > -2147483648)
		result = result * -1;

	return (result);
}
