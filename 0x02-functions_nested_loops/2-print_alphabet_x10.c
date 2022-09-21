#include "main.h"
/**
 * print_alphabet_x10 - use _putchar to print in 
 * lowercase 10xs
 * Return: Nothing.
 *
 */
void print_alphabet_x10(void)
{
	char o;
	int l;

	for (l = 0; o < 10; l++)
	{
		for (o = 'a'; o <= 'z'; o++)
			_putchar(o);
		_putchar('\n');
	}
