#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the list
 * @index: the index that should be deleted
 *
 * Return: 1 if succussful, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *prev;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	curr = *head;
	prev = NULL;
	for (i = 0; i < index; i++)
	{
		prev = curr;
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}
	if (prev == NULL)
		*head = curr->next;
	else
		prev->next = curr->next;
	free(curr);
	return (1);
}
