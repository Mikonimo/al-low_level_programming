#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string being evaluated
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (length);
	length++;
       	_strlen_recursion(s + 1);
	return (length);
}
