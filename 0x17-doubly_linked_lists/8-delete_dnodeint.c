#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at idx dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hed1;
	dlistint_t *hed2;
	unsigned int m = 0;

	hed1 = *head;

	if (hed1 != NULL)
		while (hed1->prev != NULL)
			hed1 = hed1->prev;
	while (hed1 != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = hed1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hed2->next = hed1->next;
				if (hed1->next != NULL)
					hed1->next->prev = hed2;
			}
			free(hed1);
			return (1);
		}
		hed2 = hed1;
		hed1 = hed1->next;
		m++;
	}
	return (-1);
}
