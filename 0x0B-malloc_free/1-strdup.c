#include "main.h"
#include <stdlib.h>
/**
 * _strdup - points to a new allocated space in memory
 * @str: a string
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc (sizeof(*str));
	if (s == NULL)
		return (NULL);
	s = str;
	return (s);
	free(s);
}
