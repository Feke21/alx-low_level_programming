#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: the character to be used
 *
 * Return: 1 for uppercase. 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

