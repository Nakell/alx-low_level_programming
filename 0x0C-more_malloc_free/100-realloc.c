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
	void *new_ptr;

	if (ptr == NULL)
	{
		return malloc(new_size);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return(ptr);
	void new_ptr = malloc(new_size);
	{
		if (new_ptr == NULL)
			return (NULL);
	}
	if (new_size > old_size)
		new_size = old_size;
	free(ptr);
	return (new_ptr);
}
