#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the initializing character of the array
 *
 * Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		arr[n] = c;
	return (arr);
}
