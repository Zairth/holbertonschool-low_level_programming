/**
*_strncat - concatenates two strings.
*@dest: the var destination where i concatenate the src var
*@src: the var source to append in the dest var
*@n: number of character to append to dest from src
*Return: char return, the dest return
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
		i++;
	i--;

	while (src[k] != '\0')
		k++;

	if (k > 0)
	{
		while (j < n && dest[i] != '\0')
		{
			i++;
			dest[i] = src[j];
			j++;
		}
	}
	return (dest);
}
