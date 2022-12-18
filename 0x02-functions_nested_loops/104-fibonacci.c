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
	long int a, b, a1, a2, b1, b2;

	a = 1;
	b = 2;

	printf("%ld", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %ld", b);
		b = b + a;
		a = b - a;
	}

	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %ld", b1 + (b2 / 1000000000));
		printf("%ld", b2 % 1000000000);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}

	printf("\n");

	return (0);
}
