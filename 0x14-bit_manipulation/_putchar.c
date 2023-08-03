#include "main.h"
#include <unistd.h>

/**
 * _putchar - This writes the char c to stdoutput
 * @c: The char to print.
 *
 * Return: 1 on success.
 * On error, return -1, and set err appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

