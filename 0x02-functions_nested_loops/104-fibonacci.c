#include <stdio.h>
/**
 * main - Print the first 98 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a, b, a1, a2, b1, b2;

	a = 1;
	b = 2;

	printf("%lu", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}

	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", b1 + (b2 / 1000000000));
		printf("%lu", b2 % 1000000000);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}

	printf("\n");

	return (0);
}
