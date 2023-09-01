#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 * @argc: count
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int result, i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	return (0);
}
