/**
*_strcat - concatenates two strings.
*@dest: the var destination where i concatenate the src var
*@src: the var source to append in the dest var
*Return: char return, the dest return
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	i--;

	while (src[j] != '\0')
	{
		i++;
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
