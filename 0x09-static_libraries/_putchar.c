#include <unistd.h>


/**
 * _putchar - writes the chara c to stdout
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, return -1, and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
