#include "main.h"
#include "math.h"
/**
 * _pow_recursion - function that returns the value of x to the power of @y.
 *
 * @x: int1
 * @y: int2
 *
 * Return 0.
 */
int pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y % 2 == 0)
		return (pow(pow(x, y / 2), 2));
	else
		return (x * pow(x, y - 1));
}
