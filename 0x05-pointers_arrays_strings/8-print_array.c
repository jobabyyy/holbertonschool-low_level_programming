#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of n
 *
 * @a: int1
 * @n: int2
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		a++;
		if (i != (n - 1))
			printf(", ");
	}
	_putchar('\n');
}
