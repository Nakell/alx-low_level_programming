#include "lists.h"

/**
 * *insert_node_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: integer value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	unsigned int x;
	listint_t *current = *head

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (unsinged int x = 0; x < idx - 1; x++)
	{
		if (current == NULL)
		{
			free(newnode);
			return (NULL);
		}
		current = current->next;
	}

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}

