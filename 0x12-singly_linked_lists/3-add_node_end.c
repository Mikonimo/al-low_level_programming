#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of the list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: the string held in the new node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node0;
	list_t *curr;

	if (str == NULL)
		return (NULL);
	node0 = malloc(sizeof(list_t));
	if (node0 == NULL)
		return (NULL);
	node0->str = strdup(str);
	if (node0->str == NULL)
	{
		free(node0);
		return (NULL);
	}
	node0->len = strlen(str);
	node0->next = NULL;
	if (*head == NULL)
	{
		*head = node0;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = node0;
	}
	return (node0);
}

