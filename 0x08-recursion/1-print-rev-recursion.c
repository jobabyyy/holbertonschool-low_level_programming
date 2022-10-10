#include "main.h"
#include <string.h>
/**
 * print_rev_recursion - print a string in reverse.
 *
 * @str: string to print.
 *
 * Return: 0.
 */
void print_rev_recursion(char *str)
{
	if (*str != '\0')
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
