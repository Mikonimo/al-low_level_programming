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
	int d = 0;

	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}

