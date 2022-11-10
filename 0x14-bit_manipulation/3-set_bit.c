#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at given index.
 * @n: bit
 * @index: given index
 *
 * Return: 1 if success, -1 if fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
