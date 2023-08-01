#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer
 * Return: a pointer to the first node of the reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *firstn, *lastn;

	if (head == NULL || *head == NULL)
		return (NULL);
	lastn = NULL;
	while ((*head)->next != NULL)
	{
		firstn = (*head)->next;
		(*head)->next = lastn;
		lastn = *head;
		*head = firstn;
	}
	(*head)->next = lastn;
	return (*head);
}
