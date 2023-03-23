#include "main.h"
/**
  * print_diagonal - draws a diagonal line
  * @n: number of time to be printed
  *
  */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while(i < n)
	{
		while(j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
