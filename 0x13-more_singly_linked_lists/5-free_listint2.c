#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: is a pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	/**listint_t *list2;*/

	while (head == NULL)
	{
		/**list2 = (*head)->next;*/
		free(*head);
		/**head = list2;*/
	}
	*head = NULL;
}
