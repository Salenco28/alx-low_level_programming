#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, m;
for (i = 0; i < size; i++)
{
for (m = 0; m < size; m++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
