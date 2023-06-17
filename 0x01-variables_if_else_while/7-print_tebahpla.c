#include <stdio.h>

/**
 * main - A program that prints lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0 (Succes)
 */
int main(void)
{
char bk;
for (bk = 'z'; bk >= 'a'; bk--)
{
putchar(bk);
}
putchar('\n');
return (0);
}
