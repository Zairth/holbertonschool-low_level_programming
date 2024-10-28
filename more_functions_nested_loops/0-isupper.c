/**
*_isupper - check if a char is uppercase
*@c: variable that contain the character
*Return: 1 if uppercase, otherwise return 0.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
