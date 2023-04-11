#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates teo strings
 * @s1: the first contents of the string
 * @s2: the contents following the second string
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int len1, len2;

	if (s1 == NULL && s2 == NULL)
		return ('\0');
	len1 = strlen(s1);
	len2 = strlen(s2);
	len1 += len2;
	c = malloc(sizeof(char) * (len1 +1));
	if (c == NULL)
		return (NULL);
	c = strcat(s1, s2);
	return (c);
	free(c);
}
