#include "main.h"

/**
 * get_endianness - Checks if a machine has big or little endianness
 * Return: 1 for little, 0 for big endianness.
 */
int get_endianness(void)
{
	unsigned int p = 1;
	char *c = (char *) &p;

	return (*c);
}

