#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the pointer to list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
