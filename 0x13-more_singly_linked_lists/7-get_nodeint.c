#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: is a pointer
 * @index: is an integer
 * Return: null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
	unsigned int m = 0;

	while (list && m < index)
	{
		list = list->next;
		m++;
	}
		return (NULL);
}
