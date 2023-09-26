#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: head of the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
