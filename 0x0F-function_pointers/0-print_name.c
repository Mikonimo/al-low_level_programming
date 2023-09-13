#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: pointer to a fuunction
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f = print_name;
}
