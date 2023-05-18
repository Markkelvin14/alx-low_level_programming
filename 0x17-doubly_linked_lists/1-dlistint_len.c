#include "lists.h"

/**
 * dlistint_len - returns the number of a double linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int m = 0;

	while (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		m++;
		h = h->next;
	}
	return (m);
}
