#include "holberton.h"

/**
 * string_toupper - write a function that changes all lowercase
 * letters in a string to uppercase.
 *
 * @str: string variable.
 *
 * Return: 0.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
