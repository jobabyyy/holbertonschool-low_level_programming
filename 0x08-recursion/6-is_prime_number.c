#include "main.h"

/**
 * is_prime_number - function that returns 1
 * if int is a prime number.
 *
 * @n: given integer.
 *
 * Return: 0.
 */
int is_prime_number(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return (1);
}
