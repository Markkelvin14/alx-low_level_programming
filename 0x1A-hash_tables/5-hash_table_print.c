#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int m;
	unsigned char cf = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			if (cf == 1)
				printf(", ");
			n = ht->array[m];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			cf = 1;
		}
	}
	printf("}\n");
}
