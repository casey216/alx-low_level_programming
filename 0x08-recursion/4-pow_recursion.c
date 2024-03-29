#include "main.h"

/**
 * _pow_recursion - calculate the value of x raised to the power of y
 *
 * @x: integer variable - base
 * @y: integer variable - exponent
 *
 * Return: result of exponent product
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
