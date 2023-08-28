#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long c = 0;
	int n;

	for (n = 0; n < 98; n++)
	{
		c = a + b;
		if (n < 97)
			printf("%lu, ", c);
		else
			printf("%lu\n", c);
		a = b;
		b = c;
	}
	return (0);
}


