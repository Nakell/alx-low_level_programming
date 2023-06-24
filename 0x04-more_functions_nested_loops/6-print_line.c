#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the number of times of the character
 * Return: 0
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	 _putchar('\n');
}
