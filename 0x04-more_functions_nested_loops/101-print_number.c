#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: input number
 *
 * Return: No return
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
