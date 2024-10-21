#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	char alphabet[] = ["a","b","c","d","e","f","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"];
	for (n = 0; n < alphabet.length; n++)
		putchar(alphabet.length[n]);
	return (0);
}
