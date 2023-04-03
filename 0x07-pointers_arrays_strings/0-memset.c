#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the string being evaluated
 * @b: the constant byte to be inserted
 * @n: the no of bytes being replaced
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;
	
	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
