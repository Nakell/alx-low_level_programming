#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The last number to treated
 * Return: Value of the last digit of number
*/

int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a *= -1;
		return (-a);
	}
	_putchar(a + 48);
	return (a);
}
