#include "main.h"

/**
 * print_numbers - print numbers 0-9 followed by new line
 *
 * Return: numbers and new line
 */
int print_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
