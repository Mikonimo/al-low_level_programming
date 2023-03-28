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
	int i, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
		i = n;
		while (i < len)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		n = (len - 1) / 2;
		i = n;
		while (i < len)
		{
			_putchar(str[i]);
			i++;
		}
	}
	
	_putchar('\n');
}
