#include "main.h"

/**
 * _islower - checkes lovewecase character
 * @c: the character is ASCII
 * Return: 1 if lovwercase and 0 if otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
