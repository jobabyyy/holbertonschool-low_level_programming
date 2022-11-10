#include "main.h"

/**
 * clear_bit - function that sets value of a bit to a 0 at given index.
 *
 * @n: bit value
 * @index: given index
 *
 * Return: 1 if success, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);

}
