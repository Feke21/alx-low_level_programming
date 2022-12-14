#include <stdio.h>
/**
 * main - Print the first 98 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	long int t1, t2, fs;
	/* initialize the first 2 terms */
	t1 = 1;
	t2 = 2;
	/* print the first 2 terms */
	printf("%ld, %ld", t1, t2);
	/* print the remaining 96 terms */
	for (l = 0; l < 96; l++)
	{
		fs = t1 + t2;
		/* print sequence with comma then a space */
		printf(", %ld", fs);
		t1 = t2;
		t2 = fs;
	}
	printf("\n");
	return (0);
}
