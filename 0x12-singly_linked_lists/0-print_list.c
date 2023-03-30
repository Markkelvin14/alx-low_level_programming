#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: is a pointer to the list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
