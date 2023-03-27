#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string being evaluated
 *
 */
void rev_string(char *s)
{
	int length = 0;
	char tmp;
	char *ptr = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	while (ptr < s)
	{
		tmp = *ptr;
		*ptr = *s;
		*s = tmp;
		ptr++;
		s--;
	}
}
