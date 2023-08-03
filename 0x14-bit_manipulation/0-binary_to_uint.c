#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: pointer
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		return (0);
		result = (result << 1) + (b[x] - '0');
	}

	return (result);
}
