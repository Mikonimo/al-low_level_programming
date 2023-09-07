#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory of an array, using malloc
 * @nmemb: elements
 * @size: bytes of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int t_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t_size = nmemb * size;
	p = malloc(t_size);
	if (p = NULL)
		return (NULL);
	return (p);
}

