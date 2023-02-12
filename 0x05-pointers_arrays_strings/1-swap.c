#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer a
 * @b: interger b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
