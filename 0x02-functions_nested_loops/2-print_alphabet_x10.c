#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int B;
	int A;

	for (B = 0; B <= 9; B++)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);
		}
	_putchar('\n');
	}
}
