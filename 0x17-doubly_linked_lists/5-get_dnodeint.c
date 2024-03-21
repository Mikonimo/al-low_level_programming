#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: the head node
 * @index: the index of the node
 *
 * Return: the nth node of a dlistint_t list, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = head;
	while (i != index)
	{
		node = node->next;
		if (node == NULL)
		{
			return (NULL);
		}
		i++;
	}
	return (node);
}
