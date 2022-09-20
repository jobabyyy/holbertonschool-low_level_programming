#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description - 'Alphabet to be converted to lower case and reverse'
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
