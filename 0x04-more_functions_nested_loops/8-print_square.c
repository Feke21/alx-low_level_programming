#include "main.h"

/**
 * print_square - prints squares
 *
 * @size: size of the square
 *
 * Return: No return
 */
void print_square(int size)
{
	int l, k;

	for (l = 0; l < size; l++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
		if (size <= 0)
		{
			_putchar('\n');
		}
}
