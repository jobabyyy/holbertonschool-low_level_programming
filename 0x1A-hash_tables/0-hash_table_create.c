#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of array
 *
 * Return: NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashT;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	
	newHashT = malloc(sizeof(hash_table_t));
	
	if (newHashT == NULL)
		return (NULL);
	
	newHashT->size = size;
	
	newHashT->array = malloc(sizeof(hash_node_t *) * size);
	if (newHashT->array == NULL)
	{
		free(newHashT);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newHashT->array[i] = NULL;
	}

	return (newHashT);
}
