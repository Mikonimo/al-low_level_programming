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

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
	*head = NULL;
}

