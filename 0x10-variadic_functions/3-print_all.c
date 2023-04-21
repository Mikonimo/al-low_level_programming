#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";
	print_f funcs[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (funcs[j].format)
		{
			if (format[i] == funcs[j].format)
			{
				printf("%s", separator);
				funcs[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_c - prints a char
 * @args: argument to print
 *
 * Return: void
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - prints an integer
 * @args: argument to print
 *
 * Return: void
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - prints a float
 * @args: argument to print
 *
 * Return: void
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - prints a string
 * @args: argument to print
 *
 * Return: void
 */
void print_s(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

