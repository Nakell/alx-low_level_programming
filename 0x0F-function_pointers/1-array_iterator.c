#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -name of the function
 * @array: array
 * @size: size of an array
 * @action: the pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
