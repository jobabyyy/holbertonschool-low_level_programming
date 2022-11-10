#include "main.h"

/**
 * flip_bits - function that returns num of bits you
 * would need to flip to get from one num to next.
 *
 * @n: num of bits
 * @m: integer
 *
 * Return: value.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
