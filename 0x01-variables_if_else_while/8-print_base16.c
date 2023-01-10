#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int B;
int bc;
for (B = '0'; B <= '9'; B++)
{
putchar(B);
}
for (bc = 'a'; bc <= 'f'; bc++)
{
putchar(bc);
}
putchar('\n');
return (0);
}
