#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searchesa astring for any set of bytes
 * @s: the string being evaluated
 * @accept: the set of bytes being searched
 *
 * Return: s if succesful
 * NULL if unsuccessful
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

