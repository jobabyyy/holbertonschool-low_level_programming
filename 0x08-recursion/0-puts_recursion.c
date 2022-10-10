#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - write a function that
 * prints a string, followed by new line.
 *
 * @s: string.
 *
 * Return: 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /*base case*/
		return;
	printf("%c", *s);
	++s;
}
