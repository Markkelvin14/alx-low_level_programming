#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned
 * @b: is a char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int k = 0;
	unsigned int m = 0;

	if (b == NULL)
		return (0);

	/**for (k = 0; b[k] > 0; k++) it iterates through the string*/
	while (b[k] > 0)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		m = 2 * m + (b[k] - '0');
		k++;
	}
	return (m);
}
