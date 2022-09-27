#include "main.h"

/**
 * swap_int - swap int(s) a and b.
 *
 * @a: int1
 * @b: int2
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
