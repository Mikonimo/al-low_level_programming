#include "main.h"
/**
  * print_diagonal - draws a diagonal line
  * @n: number of time to be printed
  *
  */
void print_diagonal(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
