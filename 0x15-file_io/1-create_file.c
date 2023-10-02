#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of the file being created
 * @text_content: NULL terminated string written to the file
 *
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_RDWR | O_CREAT);
	if (op < 0)
		return (-1);
	if (text_content != NULL)
	{
		wr = write(op, text_content, strlen(text_content));
		if (wr < 0)
			return (-1);
	}
	close(op);
	return (1);
}

