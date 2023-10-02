#ifndef MAIN_H
#define MAIN_H
#define BUF_SIZE 1024
#include <stddef.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
#endif /* MAIN_H */
