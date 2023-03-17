#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - entry point
  *
  * Return: 0 exit the function
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	if (n % 10 > 5)
	{
		printf("%d and is less than 5\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
		printf("%d and is less than 6 and not 0\n", n % 10);
	return (0);
}
