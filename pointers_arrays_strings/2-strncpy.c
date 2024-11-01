/**
*_strncpy - copies n char pointed by src, to dest
*@dest: the destination adress to copy the n char of src
*@src: the src n char to copy to the new adress destination
*@n: number of char to copy
*Return: char return dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0')
		j++;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (n > j)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
