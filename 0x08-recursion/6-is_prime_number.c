#include "main.h"
/**
 * check_prime - checks divisibility of n
 * @n: the no being checked
 * @d: a divisor
 *
 * Return: 1 if n is divisible
 */
int check_prime(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0)
		return (0);
	return (check_prime(n, d - 1));
}
/**
 * is_prime_number - checks for prime no
 * @n: the no being evaluated
 *
 * Return: 1 if its a prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}
