#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees grid created previously
 * @grid: the grid
 * @height: the height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}
