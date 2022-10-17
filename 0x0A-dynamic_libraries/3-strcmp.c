#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: compared values
 */

int _strcmp(char *s1, char *s2)
{
	int i, b;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	b = s1[i] - s2[i];
	return (b);
}
