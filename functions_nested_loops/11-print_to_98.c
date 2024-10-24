#include <stdio.h>

/**
*print_to_98 - prints all natural numbers from n to 98, followed by a new line.
*@n : number to iterate until hit 98
*Return: return void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
