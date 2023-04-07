#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size in number of nodes
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx;
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
		new_ht->array[idx] = NULL;

	return (new_ht);
}
