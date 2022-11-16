#include "hash_tables.h"

/**
 * hash_table_print - function that prints hash table
 * @ht: hash table
 *
 * Return: display ht
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *NewNode;
	unsigned long int index;
	int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < (ht->size); index++)
	{
		NewNode = ht->array[index];
		while (NewNode != NULL)
		{
			if (i > 0)
				printf(", ");
			
			printf("\'%s\': \'%s\'", (NewNode->key), (NewNode->value));
			NewNode = NewNode->next;
			i++;
		}
	}
	printf("}\n");
}
