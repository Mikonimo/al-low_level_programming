#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	long long a = 0;
	long long b = 1;
	long long c = 0;
	int n;

	for (n = 0; n < 50; n++)
	{
		c = a + b;
		if (n < 49)
		{
			printf("%lld, ", c);
		}
		else
		{
			printf("%lld\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}
