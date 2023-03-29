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
	char leet[8] = "aAeEoOtTlL";
	char leet_nums[8] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}

	return (str);
}
