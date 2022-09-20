#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'lowercase to uppercase using puchat'
 *
 * return: 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')

	{
		putchar(alphabet);
		alphabet++;
	}
	alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
