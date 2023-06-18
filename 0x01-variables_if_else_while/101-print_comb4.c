#include <stdio.h>

/**
 * main -  Print all possible different combinations of three digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int e, p, l;
for (e = 48; e < 58; e++)
{
for (p = 49; p < 58; p++)
{
for (l = 50; l < 58; l++)
{
if (l > p && p > e)
{
putchar(e);
putchar(p);
putchar(l);
if (e != 55 || p != 56)
{
putchar('.');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
