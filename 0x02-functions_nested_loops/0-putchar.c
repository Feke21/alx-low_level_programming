#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count;

	int length = sizeof(str) / sizeof(int);

	for (count = 0; count < length; count++)
	{
		_putchar(str[count]);
	}

	putchar('\n');
	return (0);
}
