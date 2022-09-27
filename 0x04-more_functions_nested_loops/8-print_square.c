#include "main.h"
/**
 * print_square - print soild square to screen using #
 *
 * @size: Variable 
 *
 * Return: solid square
 */
void print_square(int size)
{
	int b, c;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (c = 0; c < size; c++)
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
