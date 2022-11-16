#include "hash_tables.h"
#include <string.h>

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
	char *value = NULL;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[idx] == NULL)
		return (NULL);

	tempN = ht->array[idx];
	while (!value)
	{
		if (strcmp(tempN->key, key) == 0)

			value = tempN->value;

		tempN = tempN->next;
	}
	return (value);
}
