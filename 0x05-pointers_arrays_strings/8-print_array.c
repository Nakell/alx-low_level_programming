#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: array name
 * @n: the numbers of elemnts of hte array to print
 * Return: a and n input
 */
void print_array(int *a, int *n)
{
	int x;

	for (x = 0 ; x < (n - 1); x++)
	{
		printf("%d", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[x]);
	}
	printf("\n");
}

