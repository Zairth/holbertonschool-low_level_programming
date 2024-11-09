/**
*natural_square - returns the natural square root of a number.
*@n: the number to get the natural square root
*@count: the number to test
*Return: int return
*/
int natural_square(int n, int count)
{
	if (count * count == n)
		return (count);
	if (count > n / 2)
		return (-1);
	return (natural_square(n, count + 1));
}

/**
*_sqrt_recursion - returns the natural square root of a number.
*@n: the number to get the pow
*Return: int return
*/
int _sqrt_recursion(int n)
{
	return (natural_square(n, 0));
}
