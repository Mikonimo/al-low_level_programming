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
/**
 * is_palindrome - checks for a palindrome
 * @s: the string being checked
 *
 * Return: 1 if it is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int i = 1;

	if (len == 0)
		return (1);
	if (s[0] != s[len - 1])
		return (0);
	s[len - 1] = '\0';
	i = is_palindrome(s + 1);
	s[len - 1] = s[0];
	return (i);
}
