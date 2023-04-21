#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by a given separator
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

