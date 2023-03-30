#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: is a pointer to the list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		m++;
	}
	return (m);
}
