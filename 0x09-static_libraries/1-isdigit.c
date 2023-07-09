#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the character is checked
 * Return: 1 if character and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
