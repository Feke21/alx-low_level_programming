#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 *
 * @n: input number
 *
 * Return: No return value
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}

