#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 0 or  1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newhash;
	char *cpyval;
	unsigned long int idx, m;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpyval = strdup(value);
	if (cpyval == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (m = idx; ht->array[m]; m++)
	{
		if (strcmp(ht->array[m]->key, key) == 0)
		{
			free(ht->array[m]->value);
			ht->array[m]->value = cpyval;
			return (1);
		}
	}

	newhash = malloc(sizeof(hash_node_t));
	if (newhash == NULL)
	{
		free(cpyval);
		return (0);
	}
	newhash->key = strdup(key);
	if (newhash->key == NULL)
	{
		free(newhash);
		return (0);
	}
	newhash->value = cpyval;
	newhash->next = ht->array[idx];
	ht->array[idx] = newhash;

	return (1);
}
