#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns the no of elements in a linked list
 * @h: the pointer to the first node
 *
 * Return: no of elements in linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
