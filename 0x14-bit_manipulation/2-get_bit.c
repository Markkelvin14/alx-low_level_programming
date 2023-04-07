#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: is an unsigned int
 * @index: is an integer
 * Return: an int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int m;

	if (index > 50)
		return (-1);
	else
		m = (n >> index) & 1;
	return (m);
}
