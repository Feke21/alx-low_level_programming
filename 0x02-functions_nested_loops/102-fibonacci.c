#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, fs;
	/* initialize the first 2 terms */
	int t1, t2;
	/* print the first 2 terms in sequence */
	t1 = 1;
	t2 = 2;
	printf("%d, %d", t1, t2);
	/* print the remaining 48 terms in sequence */
	for (l = 0; l < 48; l++)
	{
		fs = t1 + t2;
		printf(", %d", fs);
		t1 = t2;
		t2 = fs;
	}
	printf("\n");
	return (0);
}
