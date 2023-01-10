#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: a pointer to a duplicated string.
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
		;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
