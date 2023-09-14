#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry pointer
 * @argc: the counter
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int num1, num2, res;
	char *operator;
	int (*f_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (operator == NULL)
	{
		printf("Error\n");
		return (99);
	}
	f_ptr = get_op_func(operator);
	res = f_ptr(num1, num2);
	printf("%d\n", res);
	return (0);
}


