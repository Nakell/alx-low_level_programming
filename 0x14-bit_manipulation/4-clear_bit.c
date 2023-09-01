#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to an unsigned long integer
 * @index: index of the bit to be set to 0
 * Return: 1 if successful, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
