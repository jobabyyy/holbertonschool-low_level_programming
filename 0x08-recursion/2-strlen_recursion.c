#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - print the length of string.
 *
 * @s: string
 *
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
