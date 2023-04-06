#include "main.h"

/**
 * sqrt_check - checks for the square root of n
 * @n: the number being evaluated
 * @i: the current guess at the square root
 *
 * Return: the square root of n or -1 if not found
 */
int sqrt_check(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number being evaluated
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_check(n, 2));
}
