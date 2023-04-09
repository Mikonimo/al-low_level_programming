#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string being converted
 *
 * Return: the integer or 0
 */
int _atoi(char *s)
{
	int sn = 1;
	int n = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sn *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
		s++;
	}
	return (sn * n);
}
