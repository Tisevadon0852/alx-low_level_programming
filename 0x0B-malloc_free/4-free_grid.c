#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimentional grid
 * @grid: int type
 * @height: int type
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
