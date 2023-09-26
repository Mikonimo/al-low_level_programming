#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node0;
	listint_t *curr;
	listint_t *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node0 = malloc(sizeof(listint_t));
	if (node0 == NULL)
		return (NULL);
	curr = *head;
	while (i != idx)
	{
		curr = curr->next;
		if (curr == NULL)
		{
			free(node0);
			return (NULL);
		}
	}
	prev = *head;
	while (prev->next != curr)
		prev = prev->next;
	node0->n = n;
	node0->next = curr;
	prev = node0;
	return (node0);
}

