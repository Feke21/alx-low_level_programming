#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int b, p, e, m;

	for (b = '0'; b <= '2'; b++)
	{
		for (p = '0'; p <= '3'; p++)
		{
			for (e = '0'; e <= '5'; e++)
			{
				for (m = '0'; m <= '9'; m++)
				{
					if (b >= '2' && p >= '4')
					{
					break;
					}
					_putchar(b);
					_putchar(p);
					_putchar(':');
					_putchar(e);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
