#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it works or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_value_to_set = 1;

	if (index > 63)
		return (-1);
	bit_value_to_set = bit_value_to_set << index;
	*n = (*n | bit_value_to_set);
	return (1);
}
