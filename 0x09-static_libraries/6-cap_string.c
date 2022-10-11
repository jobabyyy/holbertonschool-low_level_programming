#include "holberton.h"

/**
 * *cap_string - capitalize all letters in a string.
 * @str: letters
 *
 * Return: 0.
 */
char *cap_string(char *str)
{
	int counter = 0, i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + counter) >= 97 && *(str + counter) <= 122)
		*(str + counter) = *(str + counter) - 32;
	counter++;
	while (*(str + counter) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + counter) == separators[i])
			{
				if ((*(str + (counter + 1)) >= 97) && (*(str + (counter + 1)) <= 122))
					*(str + (counter + 1)) = *(str + (counter + 1)) - 32;
				break;
			}
		}
		counter++;
	}
	return (str);
}
