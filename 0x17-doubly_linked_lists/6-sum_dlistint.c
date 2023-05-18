#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)of a linked list
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int m = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			m += head->n;
			head = head->next;
		}
	}
	return (m);
}
