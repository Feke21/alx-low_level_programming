#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
