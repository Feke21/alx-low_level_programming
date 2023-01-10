#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = '0'; i <= '7'; i++)
{
for (j = i + 1; j <= '8'; j++)
{
for (k = j + 1; k <= '9'; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i == '7' && j == '8' && k == '9')
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

