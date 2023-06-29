#include "main.h"

/**
 * _strncat - This concatenates two strings using
 * n bytes from src
 * @dest: input a value
 * @src: input a value
 * @n: input a value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int u;
	int p;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
	dest[u] = src[p];
	u++;
	p++;
	}
	dest[u] = '\0';
	return (dest);
}

