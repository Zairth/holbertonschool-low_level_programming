#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup -  returns a pointer to a newly allocated space in memory
*@str: variable that contain the string copy
*Return: char return
*/
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *new_string;

	if (str == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)

	new_string = malloc(sizeof(char) * i + 1);

	if (new_string == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		new_string[j] = str[j];
		j++;
	}

	return (new_string);
}
