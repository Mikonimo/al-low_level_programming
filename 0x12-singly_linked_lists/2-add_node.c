#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the  pointer of the head of the list
 * @str: the str held in the new node
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;

	if (str == NULL)
		return (NULL);
	node1 = malloc(sizeof(list_t));
	if (node1 == NULL)
		return (NULL);
	node1->str = strdup(str);
	if (node1->str == NULL)
	{
		free(node1);
		return (NULL);
	}
	node1->len = strlen(str);
	node1->next = *head;
	*head = node1;
	return (node1);
}
