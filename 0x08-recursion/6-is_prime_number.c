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
	int count = 0;

	for (int i = 2; i <= n / 2; i++)
	{
		if(n % i == 0)
		{
			count = 1;
			break;
		}
	}
	if (n == 1)
		count = 1;
	return (count);
}

int main()
{
	int n ;

	printf("Enter number: ");
	scanf("%d", %n);

	if (is_prime_number(n) == 0)
		printf("%d is a prime number." n);
	else
		printf("%d is not a prime number." n);
	return (0);
}
