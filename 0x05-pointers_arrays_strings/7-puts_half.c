#include "main.h"
/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i, start;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;

	for (i = start; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}
