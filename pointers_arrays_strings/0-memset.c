/**
 *_memset - fills memory with a constant byte.
 *@n: number of character to copy to the dest (*s)
 *@b: the src character to copy n times to the dest var
 *@s: the destination strings return
 *Return: char return
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}