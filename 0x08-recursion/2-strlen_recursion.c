#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the length of the dtring being evaluated
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (len + _strlen_recursion(s + 1));
}
