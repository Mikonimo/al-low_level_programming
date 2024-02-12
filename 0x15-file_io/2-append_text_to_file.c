#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success els -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op < 0)
		return (-1);
	if (text_content != NULL)
	{
		wr = write(op, text_content, strlen(text_content));
		if (wr < 0)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
