#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: is a pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		h = h->next;
		m++;
	}
	return (m);
}
