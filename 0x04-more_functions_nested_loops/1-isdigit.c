#include "main.h"
/**
 * _int_isdigit: function to check for digit
 *
 * @c: Variable
 *
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
