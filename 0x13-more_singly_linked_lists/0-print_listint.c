#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: is a pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
	h = h->next;
	m++;
	}
	return (m);
}
