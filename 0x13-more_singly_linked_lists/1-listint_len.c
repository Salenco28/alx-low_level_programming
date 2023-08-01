#include "lists.h"

/**
 * listint_len - The number of elements in a linked lists is returned
 * @h: This linked list of type listint_t to traverse
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

