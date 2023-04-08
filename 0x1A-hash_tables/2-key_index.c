#include "hash_tables.h"

/**
 * key_index - Returns the index at which a key should be stored in an array
 * @key: The key to be hashed
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *new_key, unsigned long int size)
{
	unsigned long int hash_val = hash_djb2(new_key);

	return (hash_val % size);
}
