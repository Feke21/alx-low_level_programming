#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * start with the first character
 * followed by a new line
 * @str: string to be used
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int j, k;

	k = strlen(str);
	for (j = 0; j < k; j++)
	{
		if (j % 2 == 1)
		{
			continue;
		}
		_putchar(str[j]);
	}
	_putchar('\n');
}
