#include "main.h"

/**
 * set_bit - A bit at a given index is set to 1
 * @n: The pointer to the number to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 if successful, -1 if not successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

