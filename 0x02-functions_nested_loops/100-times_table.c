#include "main.h"

/**
 * print_times_table - print the n times table
 *
 * @n: number times table (0 < n < 15)
 *
 * Return: No return value
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				_putchar(',');
				_putchar(' ');
				if (c <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c <= 99)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					_putchar(((c / 100) % 10) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

