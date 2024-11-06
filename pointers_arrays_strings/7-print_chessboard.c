#include "main.h"

/**
*print_chessboard - prints the chessboard.
*@str: string variable
*Return: no return, void function
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j] + 0);
		}
		_putchar('\n');
	}
}
