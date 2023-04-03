#include "main.h"
/**
 * _memset - fills the first n bytes of memory area pointed by s with a constant byte b
 * @s: the string being evaluated
 * @b: the constant byte to be inserted
 * @n: the no of bytes being replaced
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	unsigned int x = 0;

	while (s[i] != '\0')
	{
		while (x < n)
		{
			s[i] = b;
			x++;
		}
		i++;
	}
	return (s);
}
