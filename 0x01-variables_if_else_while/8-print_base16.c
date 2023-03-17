#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 exit the function
  */
int main(void)
{
	char a = 0x0;

	while (a < 0xf)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
