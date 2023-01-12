#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: smaller integer
 * @max: bigger integer
 *
 * Return: pointer to new created array
 * if min > max, return null
 * if malloc fails, return null
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ar[i] = min;
	return (ar);
}
