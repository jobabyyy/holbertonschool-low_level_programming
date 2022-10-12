#include "main.h"


/**
 * main - program that prints num of arguements passed.
 *
 * @argc: counter
 * @argv: argument passed.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
