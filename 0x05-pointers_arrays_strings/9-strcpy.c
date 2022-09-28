#include "main.h"
/**
 * _strcpy - copy string pointed to by src
 * @dest: var1
 * @scr: var2
 * Return: 0
 */
char *_strcpy(char *dest char *src)
{
	int b = 0;

	while (src)
	{
		dest[b] = src[b];
		b++;
	}
	return (dest);
}

