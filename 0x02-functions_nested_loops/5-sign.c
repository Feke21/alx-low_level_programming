#include "main.h"

/**
 * print_sign - Checks if number is grater than, less than or equal to zero
 *
 * @n: The input number as an integer
 *
 * Return: 1 and + sign if greater than zero.
 * 0 and 0 if equal to zero.
 * -1 and - sign if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
