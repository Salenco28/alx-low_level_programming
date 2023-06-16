#include <stdio.h>

/**
 * main - Prints the alphabets
 * Return: Always (Success)
 *
 */
int main(void)
{
int u = 97;
int v = 65;
while (u <= 122)
{
putchar(u);
u++;
}
while (v <= 90)
{
putchar(v);
v++;
}
putchar(u);
return (0);
}
