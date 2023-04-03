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
	int i = 0;
	int len = 0;

	while (s[i] <= accept[i])
	{
		 len++;
		 i++;
	}
	return (len);
}
