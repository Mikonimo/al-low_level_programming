#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1, len2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	len1 = 0;
	while (argv[1][len1])
	{
		if (!_isdigit(argv[1][len1]))
		{
			printf("Error\n");
			return (98);
		}
		len1++;
	}

	len2 = 0;
	while (argv[2][len2])
	{
		if (!_isdigit(argv[2][len2]))
		{
			printf("Error\n");
			return (98);
		}
		len2++;
	}

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		return (1);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (; i < len1 + len2; i++)
		printf("%d", result[i]);

	printf("\n");

	free(result);

	return (0);
}

