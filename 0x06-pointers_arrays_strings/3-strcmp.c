#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal. m if different
 */
int _strcmp(char *s1, char *s2)
{
	int i, m;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			m = s1[i] - s2[i];
			return (m);
		}

	}
	return (0);
}
