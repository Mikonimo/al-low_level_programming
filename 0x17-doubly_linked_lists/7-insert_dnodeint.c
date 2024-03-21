#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @idx: the index of the list where the new node should be added
 * @h: the head pointer
 * @n: an integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *curr = *h;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
		if (node == NULL)
		{
			return (NULL);
		}
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	while (i < idx - 1 && curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
	{
		free(node);
		return (NULL);
	}
	node->prev = curr;
	node->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = node;
	curr->next = node;
	return (node);

}
