#include "main.h"

/**
 * _strpbrk - function that searches a string for any
 * of a set of bytes.
 *
 * @s: string.
 * @accept: variable.
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}

