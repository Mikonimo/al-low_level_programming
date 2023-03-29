#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the no of bytes to be printed
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int d = 0;

	while (i < n && src[i] != '\0')
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}

