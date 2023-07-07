#include "main.h"

/**
 * _prime_number - actual prime number
 * @n: integer
 * @x: iterate number
 * Return: 1 if prime number 0 if not
 */

int _prime_number(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	else
		return (_prime_number(n, x - 1));
}

/**
 * is_prime_number - function prints a prime number
 * @n: integer
 * Return: 1 if input is a prime number 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}
