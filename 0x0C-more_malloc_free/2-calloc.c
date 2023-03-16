#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: is an int
 * @size: is an int
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	int i = 0, m = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = nmemb * size;
	str = malloc(m);

	if (str == NULL)
		return (NULL);
	while (i < m)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
