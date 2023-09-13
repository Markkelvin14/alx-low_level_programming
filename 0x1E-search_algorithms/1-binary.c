#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t le = 0;
	size_t ri = size - 1;
	size_t mid = 0;
	size_t m = 0;

	if (array != NULL)
	{
		while (le <= ri)
		{
			mid = (le + ri) / 2;
			printf("Searching in array: ");
			for (m = le; m < ri; m++)
			{
				printf("%d, ", array[m]);
			}
			printf("%d\n", array[m]);
			if (array[mid] < value)
			{
				le = mid + 1;
			}
			else if (array[mid] > value)
			{
				ri = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
