#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of list_t
 * @head: pointer to a pointer to list_t
 * @str: pointer to constant char
 * Return: new node at end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *end;
	unsigned int  length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = length;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	end = *head;
	while (end->next)
		end = end->next;
	end->next = newnode;
	return (newnode);
}
