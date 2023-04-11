#include <stdio.h>
/**
 * main - entry point
 * @argc: no of arguments
 * @argv: array of strings
 *
 * Return: o success otherwise failure
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
