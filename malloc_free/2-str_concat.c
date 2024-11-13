#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat -  concatenates two strings.
*@s1: the first str
*@s2: the second str to add to the first
*Return: char return
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int y;
	char *str3 = NULL;

	for (; s1[i] != '\0'; i++)
	;
	for (; s2[j] != '\0'; j++)
	;

	y = i + j + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str3 = malloc(sizeof(char) * y);

	if (str3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str3[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		str3[i + j] = s2[j];

	return (str3);
}
