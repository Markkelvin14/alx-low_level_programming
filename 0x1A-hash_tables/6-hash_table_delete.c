#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *n, *t;
	unsigned long int m;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			n = ht->array[m];
			while (n != NULL)
			{
				t = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = t;
			}
		}
	}
	free(head->array);
	free(head);
}
