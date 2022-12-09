#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int bc;
for (bc = 'a'; bc <= 'z'; bc++)
if ((bc != 'q' && bc != 'e') && bc <= 'z')
{
putchar(bc);
}
putchar('\n');
return (0);
}
