#include "main.h"

/**
 * more_numbers - print numbers 0 to 14. 10 times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
