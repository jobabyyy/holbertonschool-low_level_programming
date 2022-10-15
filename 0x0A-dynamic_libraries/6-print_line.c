#include "main.h"
/**
 * print_line - screen should print straight line.
 *
 * @n: Variable
 *
 * Return: new line
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
