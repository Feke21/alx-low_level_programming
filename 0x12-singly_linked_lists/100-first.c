#include <stdio.h>

void deyPlay(void) __attribute__ ((constructor));
/**
 * deyPlay - function before the main function
 *
 * Return: nothing
 */
void deyPlay(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
