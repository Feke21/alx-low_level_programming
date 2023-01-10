#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: sub string to search for
 *
 * Return: a pointer to the beginning of @needle or
 * null if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
