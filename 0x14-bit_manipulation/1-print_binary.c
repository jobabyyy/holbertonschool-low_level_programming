#include "main.h"

/**
 * print_binary - function that prints the binary rep of a num.
 * @n: binary num
 *
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
