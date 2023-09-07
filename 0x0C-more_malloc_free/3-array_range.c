#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the newly allocated array
 */
int *array_range(int min, int max)
{
	int *array;
	int size, n;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		array[n] = min++;
	return (array);
}
