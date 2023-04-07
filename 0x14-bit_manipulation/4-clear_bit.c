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
	if (index > 50)
		return (-1);
	*n = ((1UL >> index) ^ *n);
	return (1);
}
