#include "main.h"
#include <unistd.h>

/**
 * _putchar - This writes the char c to stdout
 * @c: The char to print
 *
 * Return: 1 On success
 * On error, -1 is returned, and appropriately set errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

