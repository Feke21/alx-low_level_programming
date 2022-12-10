#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
for (j = '0'; j <= '9'; j++)
{
putchar(j);
if (((i * 10) + j) == (3 * (i + j)))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
