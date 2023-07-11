#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: size of the array
 * @c: character to fill the array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
		return (NULL);
	y = malloc(size * sizeof(char));

	if (y == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}
	return (y);
}

