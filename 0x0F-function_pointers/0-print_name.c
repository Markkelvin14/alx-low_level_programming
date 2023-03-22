#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: is a char
 * @f: is a pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	int i = 0;
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
