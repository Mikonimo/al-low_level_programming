#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: the no of the times table printed
 *
 */
void print_times_table(int n)
{
	int a, b, product;

	for (a = 0; a <= n; a++)
	{
		if (n > 15 || n < 0)
			break;
		for (b = 0; b <= n; b++)
		{
			product = a * b;
			if (product > 9 && product < 99)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (product > 99)
			{
				_putchar(product / 100 + '0');
				_putchar((product % 100) / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				_putchar(product + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
