#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = 0;
	int n;

	for (n = 0; n <= 50; n++)
	{
		c = a + b;
		if (n < 50)
		{
			printf("%d, ", c);
		}
		else
		{
			printf("%d\n", c);
		}
		a = b;
		b = c;
	}
	return (0);
}
