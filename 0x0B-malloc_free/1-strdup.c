#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a new allocated memory, a copy of a string
 * @str: the string to be copied
 *
 * Return: pointer to the newly allocated space containing the copied string
 */
char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
		return (NULL);
	copy = malloc((sizeof(char) * strlen(str)) + 1);
	copy = str;
	if (copy == NULL)
		return (NULL);
	return (copy);
}
