#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the headnode 
 * @head: is a pointer
 * return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *shot;
	int k;

	if (head == NULL || *head == NULL)
		return (0);
	k = (*head)->n;
	shot = (*head)->next;
	free(*head);
	*head = shot;
	return (k);
}
