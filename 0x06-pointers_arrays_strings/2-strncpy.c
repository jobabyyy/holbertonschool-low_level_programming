#include "holberton.h"

/**
 * _strncpy - write a function that copies a string.
 *
 * @dest: Variable1
 * @src: Variable2
 * @n: Variable3
 *
 * Return: 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len;

	while (dest[len] != '\0')

	{
		for (len = 0; len < n && src[len] != '\0'; len++)
			dest[len] = src[len];
	       	for ( ; len < n; len++)
			dest[len] = '\0';
	}
	return dest;
}
