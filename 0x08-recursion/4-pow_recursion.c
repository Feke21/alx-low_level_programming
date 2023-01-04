#include "main.h"

/**
 * _pow_recursion - returns a number raised to the power of another number
 * @x: base number
 * @y: exponent number
 *
 * Return: -1 if @y is less than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
