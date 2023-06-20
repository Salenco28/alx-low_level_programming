#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 *
 * Return: On Success 1
 * On error, return -1, and error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
