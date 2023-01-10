#include "main.h"

/**
 * _isdigit - checks for a number between 0 to 9
 *
 * @c: number to be used
 *
 * Return: 1 if is a number from 0 to 9. 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
