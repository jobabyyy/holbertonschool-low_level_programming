#include "main.h"
/**
 * *_strcpy - copy string pointed to by src
 * @dest: var1
 * @src: var2
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (src[b])
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

