#include "main.h"
/**
 * flip_bits - returns the no of bits you would need to flip
 * @n: the first no
 * @m: the second no
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res > 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
