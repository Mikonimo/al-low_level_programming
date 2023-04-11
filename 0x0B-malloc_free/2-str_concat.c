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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	c = malloc(sizeof(char) * (len1 + len2 + 1));
	if (c == NULL)
		return (NULL);
	strcpy(c, s1);
	strcat(c, s2);
	return (c);
	free(c);
}
