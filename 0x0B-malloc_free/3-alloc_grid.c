#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a zD array of integers
 * @width: width of the array
 * @height: length of array
 *
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **)malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);
	while (i < height)
	{
		g[i] = (int *)malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			while (j < i)
			{
				free(g[j]);
				j++;
			}
			free(g);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}
