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
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*head = NULL;
}

