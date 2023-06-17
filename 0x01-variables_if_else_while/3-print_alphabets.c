#include <stdio.h>

/**
 * main - Prints the alphabets
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int n = 97;
int v = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (v <= 90)
{
putchar(v);
v++;
}
putchar('\n');
return (0);
}
