#include "main.h"

/**
 * leet - encodes a string to leet form
 * @str: string to encode
 *
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
