#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: the character to be used
 *
 * Return: 1 for lowercase. 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
