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

	if (size == 0)
		return (NULL);
       
	char *arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		arr[0] = c;
	return (arr);
}
