#include "main.h"

/**
 * _sqrt - finds the natural square root of a number
 * @n: value of the square root
 * @x: iterate the number
 * Return: the natural square root number
 */
int _sqrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value of the square root
 * Return: function returns -1 if n does have a square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
