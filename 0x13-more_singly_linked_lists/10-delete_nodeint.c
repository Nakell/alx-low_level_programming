#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *current = *head;
	unsigned int x;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	delete = current->next;
	current->next = delete->next;
	free(delete);
	return (1);
}

