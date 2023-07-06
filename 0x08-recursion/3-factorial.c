#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer
 * Return: if n is lower than 0 the function return -1 error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
		if (n < 0)
		{
			return (-1);
		}
	return (n * factorial(n - 1));
}
