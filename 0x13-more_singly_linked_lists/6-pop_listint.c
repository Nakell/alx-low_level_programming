#include "lists.h"

/**
 * pop_listint - deleted the head node of listint_t
 * @head: the pointer
 * Return: the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (*head == NULL)
		return (0);
	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (node);
}
