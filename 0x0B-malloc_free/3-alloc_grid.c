#include "main.h"
/**
 *alloc_grid - count arrray
 *@width: width of grid elements
 *@height: height of grid elements
 *Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
