#include "main.h"

/**
 * puts - print every other char in string.
 * @str: int
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int l = 0, a = 0;

	while (str[l] != '\0')
		l++;

	l -=1;

	for (; a <= l; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
