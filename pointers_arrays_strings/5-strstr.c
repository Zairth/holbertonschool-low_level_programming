/**
*_strstr - locates a substring.
*@haystack: the original string
*@needle: the string to found in haystack
*Return: return the new string (char)
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k = 0;

	while (needle[j] != '\0')
		j++;
	if (j > 0)
		j--;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (haystack[i] == needle[k])
		{
			if (k == j)
			{
				haystack = haystack + i - k;
				return (haystack);
			}
			i++;
			k++;
		}
		i -= k;
		k = 0;
	}
	return (0);
}
