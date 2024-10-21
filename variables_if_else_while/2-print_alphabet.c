#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	char alphabet[26] = ["a","b","c","d","e","f","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"];
	int a_length = alphabet.length;
	for (n = 0; n < a_length; n++)
		putchar(alphabet[n]);
	return (0);
}
