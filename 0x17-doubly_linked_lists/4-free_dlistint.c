#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *next_node;

	while (curr != NULL)
	{
		next_node = curr->next;
		free(curr);
		curr = next_node;
	}
}
