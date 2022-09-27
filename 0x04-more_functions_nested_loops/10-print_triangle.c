#include "main.h"

/**
 * print_triangle - function that prints triangle to screen
 *
 * @size: int size.
 *
 * Return: triangle.
 */
void print_triangle(int size)
{
	int b = 0, c;
	int n = size - 1;

	if (size > 0)
	{
		for (; b < size; b++)
		{
			for (c = 0; c < size; c++)
			{
				if (c < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
