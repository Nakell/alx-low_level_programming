#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The last number to treated
 * Return: Value of the last digit of number
*/

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
		_putchar(-lastd + 48);
		return (-lastd);
	}
	_putchar(lastd + 48);
	return (lastd);
}
