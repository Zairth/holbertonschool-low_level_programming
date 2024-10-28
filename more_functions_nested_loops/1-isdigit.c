/**
*_isdigit - check if a char is a digit
*@c: variable that contain the char
*Return: 1 if is digit, otherwise return 0.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
