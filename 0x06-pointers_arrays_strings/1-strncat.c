#include "main.h"

/**
 * _strncat - cat two strings
 * @dest: destination of cat string
 * @src: string to be cat
 * @n: number of iteration
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, a;

	m = 0;
	while (dest[m] != 0)
	{
		m++;
	}
	a = 0;
	while (src[a] != 0 && a < n)
	{
		dest[m] = src[a];
		m++;
		a++;
	}
	return (dest);
}
