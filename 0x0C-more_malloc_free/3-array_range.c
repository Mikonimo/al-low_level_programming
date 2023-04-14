#include "main.h"
#include <stdlib.h>
/**
 * array_arrange - creates a array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the new created array
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
