#include "lists.h"

/**
 * *get_nodeint_at_index - returns the node of a linked list
 * @head: pointer
 * @index: index of the node
 * Return: 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *current = head;

	while (current != NULL && x < index)
	{
		current = current->next;
		x++;
	}
	return (current);
}

