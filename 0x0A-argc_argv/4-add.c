#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program to add positive nums.
 *
 * @argc: counter.
 * @argv: argument.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int num, val = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		val += num;
	}
	printf("%d\n", val);
	return (0);
}
