#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - finds the square root of a number using recursion.
 * @n: the number to find the square root of
 * @low: the lowest possible square root of n
 * @high: the highest possible square root of n
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int find_sqrt(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (low > high)
		return (-1);
	else if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (find_sqrt(n, low, mid - 1));
	else
		return (find_sqrt(n, mid + 1, high));
}

