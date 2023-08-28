#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: the no of the times table printed
 *
 */
void print_times_table(int n)
{
	int a, b, product;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			product = a * b;
			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				if (b != 9)
					_putchar(' ');
				_putchar(product + '0');
			}
			if (b < 9) 
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
