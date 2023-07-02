#include "main.h"

/**
 * _abs - function computes the absolute value of an integer
 * @x: the number to computed
 * Return: Absolute value of number or zero
*/

int _abs(int x)
{
	if (x < 0)
	{
		int abs_value;

		abs_value = x * -1;
		return (abs_value);
	}
	return (x);
}
