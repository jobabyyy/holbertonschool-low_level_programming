#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments received.
 *
 * @argc: i
 * @argv: argument
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
