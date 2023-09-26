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
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		node0 = malloc(sizeof(listint_t));
		if (node0 == NULL)
			return (NULL);
		node->n = n;
		node0->next = *head;
		*head = node0;
		return (node0);
	}
	curr = *head;
	for (i = 0; curr != NULL && i < idx - 1; i++)
		curr = curr->next;
	if (curr == NULL)
		return (NULL);
	node0 = malloc(sizeof(listint_t));
	if (node0 == NULL)
		return (NULL);
	node0->n = n;
	node0->next = curr->next;
	curr->next = node0;
	return (node0);
}
