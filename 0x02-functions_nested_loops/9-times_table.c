#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			product = a * b;
			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(product + '0');
			}
			if (b < 9 && product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (b < 9 && product > 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
			}
		}
		_putchar('\n');
	}
}
