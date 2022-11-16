#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: value
 *
 * Return: value associated with the element
 * or NULL if key cant be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tempN;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tempN = ht->array[index];

	while (tempN != NULL)
	{
		if (strcmp(tempN->key, key) == 0)
			return (tempN->value);
		tempN = tempN->next;
	}
	return (NULL);
}
