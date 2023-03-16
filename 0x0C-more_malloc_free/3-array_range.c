#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: is an int
 * @max: is an int
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, m;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	ptr = malloc(sizeof(int) * m);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);

}
