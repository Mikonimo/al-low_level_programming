#include "main.h"
/**
 * *_strca - it appends the src string to the dest string, overwriting the
 * terminating null byte
 * @*dest: the destination string
 * @*src: the source string
 *
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while (src[i] != '\0')
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen] = '\0';
	return (dest);
}
