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
	int y, i;
	int *line = NULL;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	y = height * width;

	line = malloc(sizeof(int) * y);
	if (line == NULL)
		return (NULL);

	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		free(line);
		return (NULL);
	}

	while (y < 0)
	{
		line[y] = 0;
		y--;
	}

	for (i = 0; i < height; i++)
		grid[i] = &line[0] + (i * width);

	return (grid);
}
