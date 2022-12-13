#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: input number as an integer
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int b;

	b = n % 10;

	if (b < 0)
	{
		_putchar(-b + '0');
		return (-b);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}
