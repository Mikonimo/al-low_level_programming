#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - points to a new allocated space in memory
 * @str: a string
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	strcpy(s, str);
	return (s);
	free(s);
}
