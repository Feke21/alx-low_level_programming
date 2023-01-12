#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of @s2 to use
 *
 * Return: null if function fails. pointer to new allocated space
 * if @n is greater/ equal to lenth of @s2, use @s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l1, l2, ls, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n > l2)
		n = l2;
	ls = l1 + n;
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ls; i++)
		if (i < l1)
			s[i] = s1[i];
		else
			s[i] = s2[i - l1];
	s[i] = '\0';
	return (s);
}
