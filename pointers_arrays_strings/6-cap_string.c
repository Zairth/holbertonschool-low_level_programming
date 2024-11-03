/**
*cap_string - capitalizes all words of a string
*@c: the var that contain the string
*Return: return the new string with the character capitalized
*/
char *cap_string(char *c)
{
	int i = 0, j = 0;
	char separator[] = {',', ' ', ';', '.', '!', '?', '"', '\t', '\n', '\0'};
	char separator_2[] = {'{', '}', '(', ')', '\0'};
	int is_uppercase = 0;

	while (c[j] != '\0')
	{
		if (c[j] >= 'a' && c[j] <= 'z' && is_uppercase > 0)
			c[j] -= 32;

		is_uppercase = 0;

		while (separator[i] != '\0')
		{
			if (separator[i] == c[j])
				is_uppercase++;
			i++;
		}
		i = 0;
		while (separator_2[i] != '\0')
		{
			if (separator_2[i] == c[j])
				is_uppercase++;
			i++;
		}
		i = 0;
		j++;
	}
	return (c);
}
