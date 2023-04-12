#include <stdlib.h>
#include "main.h"

/**
 * free_grid - pointer to a 2 dimensional array of integers
 * @grid: function argument
 * @height: function argument
 * Return: 0
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
