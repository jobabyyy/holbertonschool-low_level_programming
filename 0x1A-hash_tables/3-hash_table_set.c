#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: location of value
 * @value: value associated with key.
 *
 * Return: 1 if success 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *NewHash;

	NewHash = (hash_table_t *)malloc(sizeof(hash_table_t));
	NewHash->key = key;
	NewHash->prox = NULL;

	NewHash->prox = ht->ListKey[value];
	ht->ListKey[value] = NewHash;
}
