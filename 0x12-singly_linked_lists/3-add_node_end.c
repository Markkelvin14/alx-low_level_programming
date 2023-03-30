#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: is a double pointer
 * @str: is a string added
 * Return: the new address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);
	endnode->str = strdup(str);
	endnode->len = len;
	endnode->next = NULL;
	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = endnode;
	return (endnode);
}
