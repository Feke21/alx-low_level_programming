#include "main.h"

/**
 * print_rev - print string in reverse, followed by a new line
 * @s: string to print in reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int rev;

	for (rev = 0; s[rev] != '\0'; rev++)
		;
	for (rev = rev - 1; s[rev] != '\0'; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
