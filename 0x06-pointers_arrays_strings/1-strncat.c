#include "holberton.h"
/**
 * *_strncat - concatenate 2 strings but do
 * not include null.
 *
 * @dest: char1
 * @src: char2
 * @n: char3
 *
 * Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i;

	while (dest[dlen] != '\0')
		++dlen;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dlen + i] = '\0';
	return (dest);
}
