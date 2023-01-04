#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be used
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * compare - compare the string
 * @start: smaller index
 * @end: bigger index
 * @s: string
 *
 * Return: 0.
 */
int compare(char *s, int start, int end)
{
	if (s[start] == s[end])
	{
		if (start == end || start == end + 1)
		{
			return (1);
		}
		return (0 + compare(s, start + 1, end - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s:string
 *
 * Return: 1 if @s is palindrome. 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
