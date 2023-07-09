#include "main.h"

/**
 * char *_strcpy - Function that copies the string pointed to by src
 * @dest: Copy to
 * @src: Copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int u = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; u < l ; u++)
	{
		dest[u] = src[u];
	}
	dest[l] = '\0';
	return (dest);
}

