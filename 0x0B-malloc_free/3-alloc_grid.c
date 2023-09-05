#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: first element
 * @height: second element
 *
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int *arr;

	if (width == 0 || height == 0)
		return (NULL);
	arr = malloc(sizeof(int) * (width *  height));
	if (arr == NULL)
		return (NULL);
	arr = [width][height];
	return (arr);
}
