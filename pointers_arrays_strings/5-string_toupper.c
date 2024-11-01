/**
*string_toupper - checks for lowercase character
*@c: pointer that contain the array
*Return: return the new array
*/
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
