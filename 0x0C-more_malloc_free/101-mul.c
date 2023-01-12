#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if ((argv[num1][num2] < '0' || argv[num1][num2] > '9'))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
