#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the no of arguments
 * @argv: an array of strings
 *
 * Return: 0 success, otherwise failure
 */
int main(int argc, char **argv)
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	coins += cents;
	printf("%d\n", coins);
	return (0);
}
