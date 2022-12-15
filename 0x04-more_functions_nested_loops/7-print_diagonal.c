#include "main.h"

/**
 * print_diagonal - print diagonals
 *
 * @n: number of times character will be printed
 *
 * Return: No return 
 */
void print_diagonal(int n)
{
	int l, k;

	for (l = 0; l < n; l++)
	{
		if (n > 1)
		{
			for (k = 0; k < l; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}

