/**
 *_memcpy - fill  memory with a constant byte.
 *@n: number of character to copy to dest
 *@src: the src character to copy n times to the dest var his memory area
 *@dest: the destination strings return
 *Return: char return
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
