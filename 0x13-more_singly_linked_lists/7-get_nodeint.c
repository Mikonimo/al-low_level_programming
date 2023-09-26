#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - returns the nth node of a lisint_t linked list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr;

	curr = head;
	while (i != index)
	{
		curr = curr->next;
		if (curr == NULL)
			return (NULL);
		i++;
	}
	return (curr);
}
