/**
*_strpbrk - searches a string for any of a set of bytes
*@s: the original string
*@accept: the char to remove the non-occurence char
*Return: return the new string (char)
*/

char *_strpbrk(char *s, char *accept)
{
	int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return (s);
}
