#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes rot13
 * @s: pointer to a string parameter
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int p;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[p] == data1[j])
			{
				s[p] = datarot[j];
				break;
			}
		}
	}
	return (s);
}

