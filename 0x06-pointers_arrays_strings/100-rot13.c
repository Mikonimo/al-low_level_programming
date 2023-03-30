#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @s: the string being encoded
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	char *p = s;
	int i, j;
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = s[i] - 'a';
			s[i] = rot[j];
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			j = s[i] - 'A';
			s[i] = rot[j + 26];
		}
	}

	return (p);
}
