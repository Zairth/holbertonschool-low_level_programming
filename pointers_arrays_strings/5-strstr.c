/**
*_strstr - locates a substring.
*@haystack: the original string
*@needle: the string to found in haystack
*Return: return the new string (char)
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k;
	int found_it = 0;

	while (needle[j] != '\0')
		j++;
	j--;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; k <= j; k++)
		{
			if (haystack[i] == needle[k])
				found_it++;
		}
		if (found_it == j && found_it != 0)
		{
			haystack = haystack + i;
			return (haystack);
		}
	}
	return (0);
}
