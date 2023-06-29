#include "main.h"

/**
 * _strcat - This concatenates two strings
 * @dest: input a value
 * @src: input a value
 *
 * Return: void on success
 */
char *_strcat(char *dest, char *src)
{
	int u;
	int j;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[u] = src[j];
		u++;
		j++;
	}

	dest[u] = '\0';
	return (dest);
}

