#include "calc.h"
/**
 * op_add - returns the sum of  a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - returns the diff of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - returns the product of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}

/**
 * op_div - returns the result of the div of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - returns the rem of the div of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
