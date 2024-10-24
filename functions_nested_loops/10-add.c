/**
*add - Write a function that adds two integers and returns the result.
*@a: variables that contains the number to operate & return the result
*@b: variable that contain the number to operate & return the result
*Return: return the result, an int.
*/
int add(int a, int b)
{
	int c, d;
	int result = a + b;

	if (result >= 10)
	{
		c = result / 10;
		d = result % 10;
		result = (c * 10) + d;
	}
	return (result);
}
