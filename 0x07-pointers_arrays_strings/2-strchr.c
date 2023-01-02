#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be used
 * @c: character to locate
 *
 * Return:  a pointer to the first occurrence of the @c in @s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
