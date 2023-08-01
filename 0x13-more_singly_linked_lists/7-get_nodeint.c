#include "lists.h"

/**
 * get_nodeint_at_index - Node at a certain index in a linked list is returned
 * @head: The first node in the linked list.
 * @index: The index of the node to return.
 *
 * Return: The pointer to the node we're looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temp = head;

	while (temp && p < index)
	{
		temp = temp->next;
		p++;
	}

	return (temp ? temp : NULL);
}

