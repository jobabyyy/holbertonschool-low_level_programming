#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: index
 * @size: value size
 *
 * Return: index at which key/value pair should
 * be stored at in array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	unsigned long int newKey;

	newKey = hash_djb2(key);
	idx = (newKey % size);
	return (idx);
}
