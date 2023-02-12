#include "main.h"

/**
 * print_numbers - prints the numbers from 0 t0 9
 */

void print_numbers(void)
{
	char c;

	c = 48;
	while (c < 58)
	{
		_putchar (c);
	c++;
	}
	_putchar ('\n');
}
