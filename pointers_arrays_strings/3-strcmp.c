#include "main.h"

/**
*_strcmp - compare 2 different string variable
*@s1: var that return the int
*@s2: var to compare with the first var
*Return: 0 if same, -1 if less, +1 if bigger
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int value = 0;
	int found_diff = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (found_diff == 0)
		{
			if (s1[i] > s2[i])
			{
				value = s1[i] - s2[i];
				found_diff++;
			}
			else if (s1[i] < s2[i])
			{
				value = s1[i] - s2[i];
				found_diff++;
			}
		}
		i++;
	}
	return (value);
}
