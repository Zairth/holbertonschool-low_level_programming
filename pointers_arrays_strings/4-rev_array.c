/**
*reverse_array - reverse an array
*@a: the array
*@n: the number of element on the array
*Return: void return
*/
void reverse_array(int *a, int n)
{
	int j;
	char tmp;

	for (j = 0; j <= n - 1; j++, n--)
	{
		tmp = a[j];
		a[j] = a[n - 1];
		a[n - 1] = tmp;
	}
}
