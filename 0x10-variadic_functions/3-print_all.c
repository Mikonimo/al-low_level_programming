#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0;
	char c;

	va_start(ap, format);
	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f". va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str ==  NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printd("\n");
}
