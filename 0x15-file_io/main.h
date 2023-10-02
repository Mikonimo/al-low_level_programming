#ifndef MAIN_H
#define MAIN_H
#define BUF_SIZE 1024
#include <stddef.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* MAIN_H */
