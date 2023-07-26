#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: values
 * @max: values
 * Return: null if malloc fails
 */
int *array_range(int min, int max)
{
	int *a, x, size;

	if (min > max)
		return (NULL);
	size = 0;
	for (x = min; x <= max; x++)
		size++;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);

	x = 0;
	while (min <= max)
	{
		a[x] = min;
		x++;
		min++;
	}
	return (a);
}
