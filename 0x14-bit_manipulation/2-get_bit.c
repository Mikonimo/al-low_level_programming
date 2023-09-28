#include "main.h"
/**
 * get_bit - returns the value of a bit given index
 * @n: the no being evaluated
 * @index: the position of the bit you want to get
 *
 * Return: value of abit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

