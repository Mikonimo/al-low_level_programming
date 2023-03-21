#include "main.h"
/**
  * print_last_digit - prints the last digit of a no
  * @x: the no being evaluated
  *
  * Return: the last digit
  */
int print_last_digit(int x)
{
	_abs(x);
	int r = x % 10;

	_putchar(r + '0');
	return (r);
}
/**
  * _abs - calculate the absolute value of an integer
  * @i: thre value being computed
  * Return: 0 success
  */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
