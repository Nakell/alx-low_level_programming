#include "main.h"
#include <stdlib.h>

/**
 * *array _range - creates an array of integers
 * @min: values
 * @max: values
 * Return: null if malloc fails
 */
int *array_range(int min, int max)
{
	int *a, x, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	a = malloc(sizeof(int) * size);
	if (a == NULL)
	return (NULL);

	for (x = 0; x < size; x++)
	a[x] = min++;
	return (a);
}




