#include "lists.h"

/**
 * add_nodeint - A new node is added at the beginning of a linked list
 * @head: This points to the first node in the list.
 * @n: The data to insert in that new node
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

