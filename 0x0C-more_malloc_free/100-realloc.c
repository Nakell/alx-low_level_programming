#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: size in bytes
 * @new_size: size in bytes
 * Return: allocated the memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *new_ptr, *x;
	unsigned int index;


	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = ptr;
	mem = malloc(sizeof(*new_ptr) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	x = mem;
	for (index = 0; index < old_size && index < new_size; index++)
		x[index] = *new_ptr++;
	free(ptr);
	return (mem);
}
