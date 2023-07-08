#include <stdio.h>
#include "main.h"

/**
 * _putchar - This writes the char c to stdout
 * @c:Character to print
 *
 * Return: On success 1.
 * Return -1 on error, and set errno appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
