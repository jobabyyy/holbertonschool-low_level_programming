#include "main.h"

/**
 * rev_string - reverse string given.
 * @s: char int
 *
 * Return: reversed string.
 */
void rev_string(char *s)
{
	int l = 0, a = 0;
	char aux;

	while (s[l] != '\0')
		l++;

	while (a < l--)
	{
		aux = s[a];
		s[a++] = s[l];
		s[l] = aux;
	}
}
