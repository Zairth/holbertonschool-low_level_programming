/**
*rot13 - encode a string with ROT13
*@c: pointer that contain the array
*Return: char return the new array
*/
char *rot13(char *c)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		j = 0;
		while (j < 52)
		{
			if (input[j] == c[i])
			{
				c[i] = output[j];
				break;
			}
			j++;
		}
	}
	return (c);
}
