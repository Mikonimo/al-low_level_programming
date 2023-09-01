#include "main.h"
/**
 * _puts - prints astring followed by a new line
 * @str: the string to be printed
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
