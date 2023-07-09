#include "main.h"

/**
 *_memcpy - This is a function that copies memory area
 *@dest: The memory where it is stored
 *@src: The memory where it is copied
 *@n: The number of bytes
 *
 *Return: The copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}

