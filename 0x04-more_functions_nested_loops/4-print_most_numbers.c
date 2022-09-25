#include "main.h"
/**
 * print_most_numbers - print nums 0-9 skip 2,4
 *
 * Return: skip 4 & 2
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == '2' && a == '4')
		{
			continue;
		}
		else
		{
			_putchar(a);
		}
			_putchar('\n');
	}
}
