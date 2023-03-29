#include "main.h"
/**
 * *string_toupper - changes al lowercase of astring to uppercase
 * @s: the string being evaluated
 *
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}
	return (s);
}
