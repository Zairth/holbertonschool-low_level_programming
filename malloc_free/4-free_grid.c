#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid -  returns a pointer to a 2 dimensional array of integers.
*@grid: the first str
*@height: the second str to add to the first
*Return: void return
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
