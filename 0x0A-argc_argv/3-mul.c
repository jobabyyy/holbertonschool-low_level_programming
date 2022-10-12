#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 nums.
 *
 * @argc: counter
 * @argv: initator.
 *
 * Return: 0 (success).
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", mul);
	}
	return (0);
}
