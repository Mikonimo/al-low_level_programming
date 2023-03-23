#include "main.h"
/**
  * print_most_numbers - prints nu except 2 and 4
  *
  */
void print_most_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
