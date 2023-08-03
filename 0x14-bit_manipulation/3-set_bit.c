#include "main.h"

/**
 * set_bit - function sets the value of a bit
 * @n: pointer
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it works or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_value = 1;

	if (index > 63)
		return (-1);

	bit_value = bit_value << index;
	*n = (*n | bit_value);
	return (1);
}

