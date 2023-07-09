#include "main.h"

/**
 * _strcat - This concatenates two strings
 * @dest: Input value
 * @src: Input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int p;
	int j;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[p] = src[j];
		p++;
		j++;
	}

	dest[p] = '\0';
	return (dest);
}

