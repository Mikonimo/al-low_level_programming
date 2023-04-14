#include  "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second dtring
 * @n: the no of bytes the second  string will be copied
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	cat = malloc(len1 + n + 1);
	if (cat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		cat[i] = s1[i];
	for (i = 0; i < n; i++)
		cat[len1 + i] = s2[i];
	cat[len1 + n] = '\0';
	return (cat);
}
