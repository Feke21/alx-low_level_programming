#include "main.h"

/**
 * _sqr_i - square of a number
 * @i: squared number
 * @j: number to square
 *
 * Return: 0
 */
int _sqr_i(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	if (j * j > i)
	{
		return (-1);
	}
	return (_sqr_i(i, j + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number to square root
 * @i: square of number
 *
 * Return: -1 if @n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqr_i(n, 0));
}
