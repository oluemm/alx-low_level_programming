#include "main.h"
/**
 *alloc_grid - count arrray
 *@width: width of grid elements
 *@height: height of grid elements
 *Return: grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	i = j = 0;
	if (height < 1)
		return (NULL);
	grid = (int **)malloc(height * sizeof(grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
