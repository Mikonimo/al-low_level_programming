#include "main.h"
/**
  * print_alphabet_x10 - print the alphabet x10
  *
  * Return: 0 success
  */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
