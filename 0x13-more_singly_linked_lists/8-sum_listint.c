#include "lists.h"
#include <stddef.h>
/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list
 * @head: head of the list
 *
 * Return: sum of all the data(n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}


