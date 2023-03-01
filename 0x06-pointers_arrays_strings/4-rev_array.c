#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: is an integer
 * @n: is an integer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0; i < n--; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;

	}
}
