#include "main.h"

/**
 * _memset - write a function that fills a memoru with a constant byte.
 *
 * @s: char1
 * @b: char2
 * @n: char3
 * Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
