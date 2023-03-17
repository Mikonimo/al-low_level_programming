#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 exit the function
  */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
