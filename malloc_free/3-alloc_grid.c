#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid -  returns a pointer to a 2 dimensional array of integers.
*@width: the first str
*@height: the second str to add to the first
*Return: int return
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
