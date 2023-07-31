#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end
 * @head: pointer to the listint_t
 * @n: the int eger value
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *end = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (end->next)
		end = end->next;
	end->next = newnode;

	return (newnode);
}


