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
	unsigned long int idx;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || (strcmp(key, "") == 0))
		return (NULL);
	idx = (hash_djb2((const unsigned char *)key) % (ht->size));
	tempN = ht->array[idx];

	while (tempN)
	{
		if (strcmp(key, tempN->key) == 0)
		{
			return (tempN->value);
		}
		tempN = tempN->next;
	}
	return (NULL);
}
