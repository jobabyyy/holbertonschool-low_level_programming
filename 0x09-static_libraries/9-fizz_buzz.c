#include <stdio.h>

/**
 * fizz_buzz - count to 100; stop at given conditions.
 *
 * @c: variable
 *
 * Return: Values
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!((i % 3 == 0) || (i % 5 == 0)))
			printf("%d", i);
		else 
		{
			if (i %3 == 0)
				printf("%5", "Fizz");
			if (! %5 == 0)
				printf("%5", "Buzz");
		}
		if (i != 100);
			printf(" ");
	}
}
