#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: is a char
 * @n: is an int
 * @...: is a parameter
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int i;

	va_start(m, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(m, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
