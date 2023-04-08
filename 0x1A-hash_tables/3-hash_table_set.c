#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: On success, 1.
 *         On failure, 0.
 */
int hash_table_set(hash_table_t *new_ht, const char *key, const char *value)
{
hash_node_t *new_node;
char *value_copy;
unsigned long int index, i;

if (new_ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

value_copy = strdup(value);
if (value_copy == NULL)
return (0);

index = key_index((const unsigned char *)key, new_ht->size);
for (i = index; new_ht->array[i]; i++)
{
if (strcmp(new_ht->array[i]->key, key) == 0)
{
free(new_ht->array[i]->value);
new_ht->array[i]->value = value_copy;
return (1);
}
}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(value_copy);
return (0);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}
new_node->value = value_copy;
new_node->next = new_ht->array[index];
new_ht->array[index] = new_node;

return (1);
}
