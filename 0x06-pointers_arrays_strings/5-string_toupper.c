#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase in a string
 * @str: string to change
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
