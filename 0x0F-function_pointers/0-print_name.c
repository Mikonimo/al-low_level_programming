#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the person
 * f - pointer to a function
 * @char: a parameter t the function pointer
 *
 */
void print_nme(char *name, void (*f)(char *))
{
	(*f)(name);
}
