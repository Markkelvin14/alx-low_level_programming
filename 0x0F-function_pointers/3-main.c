#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result operation
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int m, n;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	m = atoi(argv[1]);
	op = argv[2];
	n = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && n == 0) ||
			(*op == '%' && n == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(m, n));
	return (0);
}
