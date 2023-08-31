#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int current_char_index;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (current_char_index = 0; b[current_char_index]; current_char_index+)
	{
		if(b[current_char_index] < '0' || b[current_char_index] > '1')
			return (0);
		result = (result << 1) + (b[current_char_index] - '0');
	}
	return (result)
}

