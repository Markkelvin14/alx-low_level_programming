#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: is a pointer
 * Return: free
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
