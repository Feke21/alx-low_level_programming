#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int B;
for (B = 'z'; B >= 'a'; B--)
{
putchar(B);
}
putchar('\n');
return (0);
}
