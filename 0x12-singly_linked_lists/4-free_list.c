#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 */
void free_list(list_t *head)
{
	list_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
