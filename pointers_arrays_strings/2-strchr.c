/**
 *_strchr - locates a character in a string.
 *@s: the string to verify
 *@c: the char to compare
 *Return: char return
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
	return (0);
}
