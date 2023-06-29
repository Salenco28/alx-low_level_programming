#include "main.h"

/**
 * reverse_array - Reverse integers array
 * @a: Arrays
 * @n: Number of elements of array
 *
 * Return: void on success
 */
void reverse_array(int *a, int n)
{
	int p;
	int t;

	for (p = 0; p < n--; p++)
	{
		t = a[p];
		a[p] = a[n];
		a[n] = t;
	}
}

