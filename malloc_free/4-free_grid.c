#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - check the code.
 * @grid: the filling.
 * @height: the height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
