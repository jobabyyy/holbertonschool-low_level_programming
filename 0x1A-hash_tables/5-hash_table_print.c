#include "hash_tables.h"

/**
 * hash_table_print - function that prints hash table
 * @ht: hash table
 *
 * Return: display ht
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int NewNode = 0;
	unsigned long int i;

	if (!(ht))
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (NewNode == 1)
			{
				printf(", ");
			}
			NewNode = 1;
			printf("'%s\': \'%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
