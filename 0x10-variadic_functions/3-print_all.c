#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: is a list of arguments passed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list m;
	char *str, *srr = "";
	int i = 0;

	va_start(m, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", srr, va_arg(m, int));
					break;
				case 'i':
					printf("%s%d", srr, va_arg(m, int));
					break;
				case 'f':
					printf("%s%f", srr, va_arg(m, double));
					break;
				case 's':
					str = va_arg(m, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", srr, str);
					break;
				default:
					i++;
					continue;
			}
			srr = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(m);
}
