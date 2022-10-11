#include "main.h"
#include <stdio.h>

/**
 * factorial - return the factorial of given num.
 *
 * @n: given num.
 *
 * Return: 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
