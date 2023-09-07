#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the no of bytes from s2 to be concatenated
 *
 * Return: pointer to the memory space of the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *str;

	if (s1 != NULL)
		l1 = strlen(s1);
	else
		l1 = 0;
	if (s2 != NULL)
		l2 = strlen(s2);
	else
		l2 = 0;
	if (n >= l2)
		n = l2;
	str = malloc((l1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] =  s2[j];
	str[i + n] = '\0';
	return (str);
}


