#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by anew line
 * @separator: string to be printed between numbers
 * @n: is the number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
