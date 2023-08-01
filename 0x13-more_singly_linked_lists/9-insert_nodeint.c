#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: integer value
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current = *head;
	unsigned int x;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = current;
		*head = newnode;
		return (newnode);
	}

	for (x = 0; x < (idx - 1); x++)
	{
		if (current == NULL || current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}

