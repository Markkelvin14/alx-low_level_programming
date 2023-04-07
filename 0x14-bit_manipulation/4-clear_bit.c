#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: is an unsigned int
 * @index: is an int
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int m = *n;
	int k = 1UL;

	if (index > '?')
		return (-1);
	*n = (~(k << index) ^ m);
	return (1);
}
