#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints operation codes
 * @a: address of main function
 * @b: bytes to print
 *
 * Return: nothing
 */
void print_opcodes(char *a, int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		printf("%.2hhx", a[i]);

		if (i < b - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its main function
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
