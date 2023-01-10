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
for (B = 'a'; B <= 'z'; B++)
{
putchar(B);
}
for (bc = 'A'; bc <= 'Z'; bc++)
{
putchar(bc);
}
putchar('\n');
return (0);
}
