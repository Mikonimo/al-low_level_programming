#include "main.h"
/**
  * main - check the code
  *
  * Return: Always 0
  */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
  * print_alphabet - prints the  alphabet
  *
  * Return: 0 on success
  */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		_putchar('\n');
	}
}
