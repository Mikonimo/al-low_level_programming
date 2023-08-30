#include "main.h"
/**
 * _pow_recursion - returns the value of x raised by power of y
 * @x: the number
 * @y: the power
 *
 * Return: the value of x raised by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);
	return (_pow_recursion(x * 1, y - 1));
}
