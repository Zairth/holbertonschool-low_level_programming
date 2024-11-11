/**
*check - returns the natural square root of a number.
*@n: the number to check if its prime number
*@count: the number to test
*Return: int return
*/
int check(int n, int count)
{
	if (count == n)
		return (1);
	else if (n % count == 0)
		return (0);

	return (check(n, count + 1));
}

/**
*is_prime_number - check for prime number.
*@n: the number to analyze
*Return: int return
*/
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (check(n, 2));
}
