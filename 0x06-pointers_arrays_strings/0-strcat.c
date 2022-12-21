#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: input string
 * @src: input string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int m, a;

	m = 0; 
	while (dest[m] != '\0')
	{
		m++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[m] = src[a];
		m++;
		a++;
	}
	dest[m] = '\0';
	return (dest);
}
