#include "main.h"
/**
 * _memcpy - copies n bytes from memory are src to memory area dest
 * @dest: where the copied btes will be pasted
 * @src: where the bytes to be copied will be removed
 * @n: no of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

