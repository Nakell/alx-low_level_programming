#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function allocates memory for an array
 * @nmemb:number of  elements of array
 * @size: elements in bytes
 * Return: _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *y;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);
	y = a;
	for (index = 0; index < (size * nmemb); index++)
		y[index] = '\0';
	return (a);
}
