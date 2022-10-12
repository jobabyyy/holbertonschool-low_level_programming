#include "main.h"
#include <stdio.h>
/**
 * main - program that prints
 * all arguments it receives.
 *
 * @args: counter
 * @argv: arguement.
 *
 * Return: 0.
 */
int main(int args, char *argv[])
{
	int i = 0;

	for (i = 0; i < args; i++)
		printf("\n%s", argv[i]);

	return (0);
}
