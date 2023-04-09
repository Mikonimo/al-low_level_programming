#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @needle: the substring
 * @haystack: the string being evaluated
 *
 * Return: the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

	}
	return (NULL);
}
