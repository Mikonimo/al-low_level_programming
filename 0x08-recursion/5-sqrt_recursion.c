#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a no
 * @n: the no being evaluated
 *
 * Return: the natural square root of a no
 * else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (root(n, 1, n));
}
/**
 * root - helper function
 * @n: no being evaluated
 * @l: lower value of the range
 * @h: upper value of search range
 *
 * Return: natural square root  of a no
 */
int root(int n, int l, int h)
{
	int mid;
	long square;

	if (l > h)
		return (-1);
	mid = l + (h - l) / 2;
	square = (long)mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (root(n, mid + 1, h));
	else
		return (root(n, l, mid - 1));
}
