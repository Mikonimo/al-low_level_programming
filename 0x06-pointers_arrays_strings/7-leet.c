#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str: the string being encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet_table[5][3] = {
		{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}
	};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == leet_table[j][0] || str[i] == leet_table[j][1])
			{
				str[i] = leet_table[j][2];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
