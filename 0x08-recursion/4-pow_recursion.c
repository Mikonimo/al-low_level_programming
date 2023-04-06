#include "main.h"
/**
 * _pow_recursion - returrns the value of x raised to the power of y
 * @x: the integer being raised
 * @y: the ineger used as the power
 *
 * Return: the value of the raised integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
