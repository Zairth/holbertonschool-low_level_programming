#include "main.h"

/**
*_strcpy - copies the string pointed to by src, to dest
*@dest: the destination adress to copy the str
*@src: the src value to copy to the new adress destination
*Return: char return dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[j] != '\0')
		j++;

	for (i = 0; i <= j; i++)
		dest[i] = src[i];

	return (dest);
}
