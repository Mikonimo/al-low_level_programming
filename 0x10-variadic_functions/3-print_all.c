#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Description: c: char, i: integer, f: float, s: char * (if the string is NULL,
 * print (nil) instead); any other char should be ignored. Print a new line at the end
 * of your function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0, flag = 0;
	char fmt;

	va_start(args, format);
	while (format && format[i])
	{
		fmt = format[i];
		switch (fmt)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 1;
				break;
		}
		if ((format[i + 1] != '\0') && flag == 1)
			printf(", ");
		i++;
		flag = 0;
	}
	printf("\n");
	va_end(args);
}

