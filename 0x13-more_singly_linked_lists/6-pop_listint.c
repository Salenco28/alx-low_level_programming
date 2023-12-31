#include "lists.h"

/**
 * pop_listint - This deletes the head node of a linked list
 * @head: This points to the first element in the linked list
 *
 * Return: The data that was deleted, or 0 if
 * the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}

