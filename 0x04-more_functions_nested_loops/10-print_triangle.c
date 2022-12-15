#include "main.h"

/**
 * print_triangle - print triangles
 *
 * @size: size of the triangle
 *
 * Return: No return
 */
void print_triangle(int size)
{
	int l, k;

	if (size > 0)
		for (l = 0; l < size; l++)
		{
			for (k = 0; k < size; k++)
			{
				if (k < size - (l + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	else
	{
	_putchar('\n');
	}
}
