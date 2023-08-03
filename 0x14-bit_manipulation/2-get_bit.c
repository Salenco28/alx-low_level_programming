#include "main.h"

/**
 * get_bit - Value of a bit at an index in a decimal number is returned
 * @n: Number to be searched
 * @index: Index of the target bit.
 *
 * Return: Value of the specified bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

