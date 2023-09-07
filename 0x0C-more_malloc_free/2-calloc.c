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
	unsigned int t_size, n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t_size = nmemb * size;
	p = malloc(t_size);
	if (p == NULL)
		return (NULL);
	for (n = 0; n < t_size; n++)
		*((char *)p + n) = 0;
	return (p);
}

