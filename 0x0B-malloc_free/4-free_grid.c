#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2d array
 * @grid: the pointer to the array
 * @height: second element of the array
 *
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL)
		return;
	for (n = 0; n < height; n++)
	{
		if (grid[n] != NULL)
		{
			free(grid[n]);
			grid[n] = NULL;
		}
	}
	free(grid);
}
