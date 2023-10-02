#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the no of letters it should read and print
 *
 * Return: the actual no of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char buf[BUF_SIZE];

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);
	rd = read(op, buf, letters);
	if (rd < 0)
		return (0);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr < 0 || wr != letters)
		return (0);
	close(op);
	return (wr);
}

