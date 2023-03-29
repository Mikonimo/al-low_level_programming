#include "main.h"
/**
 * *_strncat - appends at most n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: no of bytes to be appended on dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[dlen] = src[i];
		i++;
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
