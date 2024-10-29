/**
*swap_int - swaps the values of two integers
*@a: the var to swap with b
*@b: the var to swap with a
*Return: no return, void function
*/
void swap_int(int *a, int *b)
{
	int tampon = *a;
	*a = *b;
	*b = tampon;
}
