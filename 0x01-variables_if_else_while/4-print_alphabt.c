#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 exit the function
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{

		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
