#include "holberton.h"

/**
 * reverse_array - write a function that reverses array.
 *
 * @a: int1
 * @n: int2
 *
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b;

	while (i < n--)
	{
		b = a[i];
		a[i++] = a[n];
		a[n] = b;
	}
}
