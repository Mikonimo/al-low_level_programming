#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	long a = 0;
	long b = 1;
	long c = 0;
	int n;

	for (n = 0; n < 50; n++)
	{
		c = a + b;
		if (n < 49)
		{
			printf("%ld, ", c);
		}
		else
		{
			printf("%ld\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}
