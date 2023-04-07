#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: is a pointer to an int
 * @index: is an unsigned int
 * Return: an int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int m = *n;
	int k = 1UL;

	if (index > 63)
		return (-1);
	*n = ((k << index) | m);
	return (m);
}
