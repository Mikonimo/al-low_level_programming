#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - prints all natural no upto 98
  * @n: the initializing no
  *
  */
void print_to_98(int n)
{
	int i = n;

	while (i <= 98 || i >= 98)
	{
		printf("%d", i);
		if (i < 98)
			i++;
		else if (i > 98)
			i--;
		else
			break;
		printf(", ");
	}
	printf("\n");
}
