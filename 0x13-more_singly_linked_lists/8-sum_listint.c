#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: is a pointer
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *list = head;

	while (list != NULL)
	{
		add += list->n;
		list = list->next;
	}
	return (add);
}
