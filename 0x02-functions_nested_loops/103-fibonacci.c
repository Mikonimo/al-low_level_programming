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
	long sum = 0;
	long n = 1;

	while (n <= 4000000)
	{
		c = a + b;
		if (c > 4000000)
			break;
		if (n % 2 == 0)
			sum += c;
		a = b;
		b = c;
		n++;
	}
	printf("%ld\n", c);
	return (0);
}

