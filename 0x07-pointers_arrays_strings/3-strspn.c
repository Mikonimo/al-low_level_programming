#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string being evaluated
 * @accept: the bytes of the initial segment of the string
 *
 * Return: no of bytes in the initial segment of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;

	while (s[i] != len)
	{
		while  (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
		i++;
	}
	return (len);
}
