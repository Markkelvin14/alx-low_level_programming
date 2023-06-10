#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * return: a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;
	unsigned long int m = 0;

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);

	newhash->size = size;
	newhash->array = malloc(sizeof(hash_node_t *) * size);
	if (newhash->array == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		newhash->array[m] = NULL;

	return (newhash);
}
