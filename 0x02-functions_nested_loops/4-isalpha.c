#include "main.h"

/**
 * _isalpha - checks alphabet character
 * @c:to be checked
 * Return: 1 if letter is upper or lowercase and 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
