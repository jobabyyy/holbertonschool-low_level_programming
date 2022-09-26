#include "main.h"
/**
 * more_numbers - function to print nums 0-14 10xs
 *
 * Return: Always 0 
 */
void more_numbers(void)
{
	int x, i;

	for (x = 0; x <= 9; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + 48);
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
