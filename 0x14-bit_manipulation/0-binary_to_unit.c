#include "main.h"

/**
 * binary_to_unit - function that converts a number to an int
 * @b: string
 *
 * Return: int value
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;

	while (i >= 0)
	{
		num += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}

	return(num);
}
