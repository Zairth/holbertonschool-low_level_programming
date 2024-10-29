/**
*_strlen - returns the length of a string.
*@s: var that contain the strings character
*Return: return the length of the string
*/
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
