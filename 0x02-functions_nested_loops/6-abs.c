#include "main.h"

/**
 * _abs - prints the absolute number of an integer
 *
 * @n: The number to be used
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
