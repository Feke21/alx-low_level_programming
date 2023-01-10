#include "main.h"

/**
 * _strlen - returns the length of @s
 * @s: string to be used
 *
 * Return: the length of @s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
