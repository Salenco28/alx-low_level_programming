#include "lists.h"

/**
 * print_listint - All the elements of a linked list are printed
 * @h: The linked list of type listint_t to print.
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}

