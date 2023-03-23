#include "main.h"
/**
  * print_diagonal - draws a diagonal line
  * @n: number of time to be printed
  *
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
