/**
*leet - encodes a string into 1337.
*@c: the strings to convert into 1337
*Return: return the new string
*/
char *leet(char *c)
{
	int i, j;
	char letter[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l', '\0'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	for (i = 0; letter[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == letter[i])
				c[j] = number[i];
		}
	}
	return (c);
}
