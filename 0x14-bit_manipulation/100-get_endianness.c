#include "main.h"
/**
 * get_endianness - checks for endianness
 *
 * Return: 0 if big endian, 1 if litte endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char*) &x;
	return (int)*c;
}
