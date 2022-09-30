#include "holberton.h"

/**
 * _strcat - concatenate two strings.
 *
 * @dest: character1
 * @src: character2
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i]; i++)

		;

		for (j = 0; dest[j]; i++)
		{
			src[i] = dest[j];
			i++;
		}
		return (dest);
}
