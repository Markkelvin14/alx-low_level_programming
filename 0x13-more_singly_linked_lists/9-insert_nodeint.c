#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: is a pointer
 * @idx: is an unsigned integer
 * @n: is an integer
 * Return: adress
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *list = *head;
	unsigned int m = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode || head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (list && m < idx)
	{
		m++;
		if (m == idx - 1)
		{
			newnode->next = list->next;
			list->next = newnode;
			return (newnode);
		}
		else
			list = list->next;
	}
	return (NULL);
}
