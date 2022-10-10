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
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
