#include "main.h"

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

	for (i = 0; dest[i]; i++)

		;

		for (j = 0; src[j]; j++)
		{
			dest[i] = src[j];
			i++;
		}
		return (dest);
}
