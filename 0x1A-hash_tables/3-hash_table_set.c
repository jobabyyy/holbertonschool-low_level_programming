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
	unsigned long int i;
	unsigned long int index;
	char *value_copy;
	hash_node_t *newHash;


	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
		}
	}
	newHash = malloc(sizeof(hash_node_t));
	{
		if (newHash == NULL)
			return (0);
	}
	newHash->key = strdup(key);
	if (newHash == NULL)
	{	
		free(newHash);
		return (0);
	}
	newHash->value = value_copy;
	newHash->next = ht->array[index];
	ht->array[index] = newHash;
	return (1);
}
