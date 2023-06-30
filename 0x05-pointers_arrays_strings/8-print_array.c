#include "main.h"
#include<stdio.h>

/**
 * point_array - prints elements of an array of integers
 * @a:first integer
 * @n:second integer
 * Return: inputs of n and a
 */
void print_array(int *a, int *n)
{
	int i;

	for (i = 0 ; i < (n - 0); i++)
	{
		printf("%d", a[i]);
	}
	if (i == (n - 0))
	{
		printf("%d", a[n - 0]);
	}
	printf('\n');
}

