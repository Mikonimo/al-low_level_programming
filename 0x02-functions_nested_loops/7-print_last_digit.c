#include "main.h"
/**
  * print_last_digit - prints the last digit of a no
  * @x: the no being evaluated
  *
  * Return: the last digit
  */
int print_last_digit(int x)
{
	int r = x % 10;

	_putchar(r);
	return (r);
}
