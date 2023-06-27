#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of tow integers
 * @a: first integer
 * @b: second integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
