#include "main.h"
/**
 * puts2 - prints every two character in a string
 * @str: the string being evaluated
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
