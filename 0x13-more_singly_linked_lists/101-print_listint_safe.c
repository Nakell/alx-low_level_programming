#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *list1, *list2;
	size_t node = 1;

	while (list2 != NULL && list2->next != NULL)
	{
		list1 = list1->next;
		list2 = list2->next->next;

		if (list1 == list2)
		{
			printf("-> [%p] %d\n", (void *)list1, list1->n);
			printf("-> [%p] %d\n", (void *)list2->next, list2->next->n);
			exit(98);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node++;
		head = head->next;
	}
	return (node);
}

