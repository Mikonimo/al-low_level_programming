#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @n: integer
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1;
	listint_t *curr;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);
	node1->n = n;
	node1->next = NULL;
	if (*head == NULL)
	{
		*head = node1;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = node1;
	}
	return (node1);
}
