#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: the head pointer
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	dlistint_t *node;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
		{
			curr->next->prev = NULL;
		}
		free(curr);
		return (1);
	}
	while (i < index - 1 && curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL || curr->next == NULL)
		return (-1);
	node = curr->next;
	curr->next = node->next;
	if (node->next != NULL)
		node->next->prev = curr;
	free(node);
	return (1);
}
