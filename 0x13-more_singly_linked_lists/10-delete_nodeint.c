#include "lists.h"

/**
 * delete_nodeint_at_index - This deletes a node at a certain index.
 * @head: The pointer to the first element in the list.
 * @index: The index of the node to be deleted
 *
 * Return: 1 (Success), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (p < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		p++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

