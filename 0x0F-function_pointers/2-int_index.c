#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - name of the function
 * @array: pointer to the integer
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: if no element matches size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		return (index);
	}
	return (-1);
}
