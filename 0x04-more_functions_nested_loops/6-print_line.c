#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: number of times character will be printed
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
