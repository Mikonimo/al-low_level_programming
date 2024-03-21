#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data(n) of a linked list
 * @head: the head node
 *
 * Return: the sum of all the data(n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr;

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
