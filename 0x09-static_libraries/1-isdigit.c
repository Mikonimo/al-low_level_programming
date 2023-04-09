#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the character being evaluated
 *
 * Return: 1 if it is adigit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
