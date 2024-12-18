#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings.
*@s1: first str to put in the printf
*@s2: second str to concatenate in the first one
*@n: variable that contain the char
*Return: void return
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, c, b;
	char *s3 = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		return ("");
	for (b = 0; s1[b] != '\0'; b++)
	;
	for (c = 0; s2[c] != '\0'; c++)
	;
	if (n >= c)
	{
		s3 = malloc(sizeof(char) * (b + c) + 1);
		if (s3 == NULL)
			return (NULL);

		for (i = 0; s1[i] != '\0'; i++)
			s3[i] = s1[i];
		for (x = 0; x < c; x++)
			s3[i + x] = s2[x];
		s3[i + x] = '\0';
	}
	else
	{
		s3 = malloc(sizeof(char) * (b + n) + 1);
		if (s3 == NULL)
			return (NULL);

		for (i = 0; s1[i] != '\0'; i++)
			s3[i] = s1[i];
		for (x = 0; x < n; x++)
			s3[i + x] = s2[x];
		s3[i + x] = '\0';
	}
	return (s3);
}
