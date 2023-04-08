#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: is an unsigne long in
 * @m: is an int
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k = '?';
	int j = 0;
	unsigned long int shot;

	while (k >= 0)
	{
		shot = (n ^ m) >> k;
		k--;
		if (shot & 1)
			j++;
	}
	return (j);
}
