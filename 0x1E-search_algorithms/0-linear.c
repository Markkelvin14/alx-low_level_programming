#include "search_algos.h"

/**
 * linear_search - searchs for a value using linear search algorithm
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t m = 0;

	if (array == NULL)
		return (-1);
	for (m = 0; m < size; m++)
	{
		printf("Value checked array[%lu] = [%i]\n", m, array[m]);
		if (value == array[m])
			return (1);
	}
	return (-1);
}
