#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: character
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
