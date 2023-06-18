#include <stdio.h>

/**
 * main -  A program that prints all possible combinations of
 * two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int t, m;
for (t = 0; t < 100; t++)
{
for (m = 0; m < 100; m++)
{
if (t < m)
{
putchar((t / 10) + 48);
putchar((t % 10) + 48);
putchar(' ');
putchar((m / 10) + 48);
putchar((m % 10) + 48);
if (t != 98 || m != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
