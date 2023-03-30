#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: is a pointer to list_t
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *fin;

	while (head != NULL)
	{
		fin = head->next;
		free(head->str);
		free(head);
		head = fin;
	}
}
