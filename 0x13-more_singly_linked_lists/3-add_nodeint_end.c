#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: is a pointer to the end node
 * @n: is an int
 * Return: the address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *shot = *head;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;
	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}
	while (shot->next)
		shot = shot->next;
	shot->next = endnode;
	return (endnode);
}
