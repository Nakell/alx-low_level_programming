#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer value
 * @index: bit to be set
 * Return: 1 if it works -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
