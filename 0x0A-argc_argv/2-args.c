#include <stdio.h>
/**
 * main - entry point
 * @argc: count
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
