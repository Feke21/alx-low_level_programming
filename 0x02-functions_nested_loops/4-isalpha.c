#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: character to be used
 *
 * Return: 1 for lowercase or uppercase letters. 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
