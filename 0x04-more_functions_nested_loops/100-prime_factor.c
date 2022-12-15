#include <stdio.h>

/**
 * main - find and print the largest prime factor of 612852475143
 * then a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, pf;

	n = 612852475143;
	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
