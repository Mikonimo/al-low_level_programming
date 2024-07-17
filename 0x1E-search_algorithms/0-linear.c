#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - Searches for a value in an array of integers using the
 * linear search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, 1 if value is not present
 * or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	for (index = 0; array && index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
