#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment to get bytes from
 * @accept: accepted bytes
 *
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != '0')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					n++;
				}
			}
		}
		else
		{
			return (n);
		}
	}
	return (n);
}
