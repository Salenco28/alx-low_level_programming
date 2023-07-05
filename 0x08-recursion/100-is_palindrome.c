#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - This checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is a palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Length of a string is returned
 * @s: This string calc. the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Thois checks the char recursively for palindrome
 * @s: The string to check
 * @i: iterator
 * @len: The length of the string
 *
 * Return: 1 if palindrome, otherwise reurn 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

