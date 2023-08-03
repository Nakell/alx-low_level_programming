#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * would need to flip
 * @n: first value
 * @m: second value
 * Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bit_value = 0;

	for (xor = n ^ m; xor > 0; xor >>= 1)
	{
		bit_value += (xor & 1);
	}
	return (bit_value);
}

