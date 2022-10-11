#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that prints natural
 * square root of a num.
 *
 * @n: sqrt
 *
 * Return 0.
 */
int helper_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(helper_sqrt(n, 0));
}

/**
 * helper_sqrt - recurses to find natural sqrt.
 * @n: calculates sqrt
 * @i: int
 *
 * Return: 0.
 */

int helper_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper_sqrt(n i + 1));
}
