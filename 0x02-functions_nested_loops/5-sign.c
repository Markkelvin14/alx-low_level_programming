#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: is the sign to be printed
 * Return: 1 if its greater, 0 if its 0, -1 if its less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
	return (1);
	}
	else if (n == 0)
	{
		_putchar (0);
	return (0);
	}
	else if (n < 0)
	{
		_putchar ('-');
	}
	return (-1);
}
