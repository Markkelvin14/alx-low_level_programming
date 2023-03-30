#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: is a pointer
 * Return: returns number of elements
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		m++;
		/**h = (*h).next;*/
		h = h->next;
	}
	return (m);
}
