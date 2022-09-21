#include "main.h"
/**
 * print_sign - display sign of a number
 *
 * @n: check int
 *
 * Return: 1 and print + if n is > than 0
 *
 * 0 and display 0 if n is 0
 *
 * -1 and display - if n is < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n <0)
	{
		_putchar('-');
	}
	return (-1);
}
