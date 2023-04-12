#include "main.h"
#include <stdlib.h>
#include <string.h>

int count_words(char *);
int get_word_length(char *, int);
void free_words(char **, int);

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str is NULL or contains no words - NULL
 *         Otherwise - a pointer to an array of strings (words)
 *                      NULL-terminated
 */
char **strtow(char *str)
{
	char **words;
	int word_count, index, word_len, i, j;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, index = 0; i < word_count; i++)
	{
		while (str[index] == ' ')
			index++;

		word_len = get_word_length(str + index, ' ');
		words[i] = malloc((word_len + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}

		for (j = 0; j < word_len; j++)
			words[i][j] = str[index + j];
		words[i][j] = '\0';

		index += word_len;
	}

	words[i] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in str.
 */
int count_words(char *str)
{
	int word_count = 0, i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
			word_count++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}

	return (word_count);
}

/**
 * get_word_length - Gets the length of a word.
 * @str: The string to be searched.
 * @delimiter: The character used to delimit words.
 *
 * Return: The length of the word starting from str,
 *         up to but not including the delimiter.
 */
int get_word_length(char *str, int delimiter)
{
	int length = 0;

	while (str[length] != delimiter && str[length] != '\0')
		length++;

	return (length);
}

/**
 * free_words - Frees the memory allocated by strtow.
 * @words: The array of words to be freed.
 * @num_words: The number of words in the array.
 */
void free_words(char **words, int num_words)
{
	int i;

	for (i = 0; i < num_words; i++)
		free(words[i]);

	free(words);
}
