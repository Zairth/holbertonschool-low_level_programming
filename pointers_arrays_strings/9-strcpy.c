#include "main.h"

/**
*_strcpy - copies the string pointed to by src, to dest
*@dest: the destination adress to copy the str
*@src: the src value to copy to the new adress destination
*Return: char return dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
