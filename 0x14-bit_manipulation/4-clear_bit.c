#include "main.h"

/**
 * clear_bit - Value of a given bit is set to 0.
 * @n: Pointer to the num to be changed.
 * @index: The index of the bit to be cleared.
 *
 * Return: 1 on success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

