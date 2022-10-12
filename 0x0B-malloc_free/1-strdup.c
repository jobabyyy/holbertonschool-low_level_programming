#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * a parameter.
 *
 * @str: string w/ given parameter.
 *
 * Return: NULL.
 */
char *_strdup(char *str)
{
	char *s;
	int i, b;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	s = (char *) malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (b = 0; b < i ; b++)
		s[b] = str[b];
	s[i + 1] = '\0';
	return (s);
}
