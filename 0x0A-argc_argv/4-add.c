#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int n, i;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (n = 1; n < argc; n++)
	{
		i = atoi(argv[n]);
		if (i > 0)
			result += i;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
