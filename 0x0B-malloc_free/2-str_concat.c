#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the memory of the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	cat = malloc(strlen(s1) + strlen(s2) + 1);
	if (cat == NULL)
		return (NULL);
	strcpy(cat, s1);
	strcat(cat, s2);
	return (cat);
}
