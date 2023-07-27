#include "lists.h"

/**
 * *add_node - adds new node at the beginning
 * @head: a pointer to a pointer to list_t
 * @str: a pointer to a constant char string
 * Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int length = 0;

	newnode = (list_t *)malloc(sizeof(list_t));

	while (str[length])
		length++;

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->next = *head;
	newnode->len = length;
	*head = newnode;

	return (newnode);

}
