#include "main.h"

/**
 * puts_half - print half a string.
 * 
 * @str: int
 *
 * Return: always 0.
 */
void puts_half(char *str)
{
	int l = 0, a, n;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;

	for (a = n; a < l; a++)
		_putchar(str[a]);

	_putchar('\n');
}
