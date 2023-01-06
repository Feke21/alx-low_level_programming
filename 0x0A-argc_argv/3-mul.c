#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc:argument counter
 * @argv: argument vector
 *
 * Return: Print error if the program doesn't receive two arguments
 * followed by a new line and return 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
