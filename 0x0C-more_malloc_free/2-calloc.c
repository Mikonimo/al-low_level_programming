#include "main.h"
#include <stdllib.h>
/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb:the no of elements in the  array
 * @size: no of bytes in each element
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return(NULL);

	char_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
		char_ptr[i] = 0;

	return (ptr);
}
