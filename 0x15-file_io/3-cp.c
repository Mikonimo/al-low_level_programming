#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int f1, f2, r1, w2, c1, c2;
	char buf[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: file_from file_to\n");
		exit(97);
	}
	f1 = open(av[1], O_RDONLY);
	r1 = read(f1, buf, 1024);
	if (f1 < 0 || r1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f2 = open(av[2], O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
	w2 = write(f2, buf, 1024);
	if (f2 < 0 || w2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	c1 = close(f1);
	if (c1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	c2 = close(f2);
	if (c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}

