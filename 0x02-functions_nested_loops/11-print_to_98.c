#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
int i, m;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else if (i == 98)
printf("%d\n", i);
}
}
else if (n >= 98)
{
for (m = n; m >= 98; m--)
{
if (m != 98)
printf("%d, ", m);
else if (m == 98)
printf("%d\n", m);
}
}
}
