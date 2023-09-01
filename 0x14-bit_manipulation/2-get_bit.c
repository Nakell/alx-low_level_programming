#include "main.h"

/**
 * get_bit - functions returns the value of a bit at a given index
 * @index: index starting from 0 of the bit you want to get
 * @n: number to searched
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
