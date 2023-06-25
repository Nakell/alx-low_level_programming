#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor
 * Return: void
 */

int main(void)
{
	unsigned long int p, m = 612852475143;

	for (p = 3; p < 782849; p = p + 1)
	{
		while ((m % p == 0) && (m != p))
			m = m / p;
	}
	printf("%lu\n", m);
	return (0);
}
