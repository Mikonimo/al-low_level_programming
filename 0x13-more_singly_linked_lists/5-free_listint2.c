#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (*head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		curr = curr->next;
		free(curr);
	}
	*head = NULL;
}

