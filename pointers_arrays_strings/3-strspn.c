/**
*_strspn - gets the length of a prefix substring.
*@s: the original string
*@accept: the char to count in the original string (s)
*Return: the number of occurence
*/

unsigned int _strspn(char *s, char *accept)
{
	int j;
	int count = 0;
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count = 1;
		}
		if (count == 0)
			return (i);
		else if (count == 1)
			count = 0;
	}
	return (i);
}
