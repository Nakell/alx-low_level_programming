#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: first value
 * Return: sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arg_list;

	if (n == 0)
		return (0);

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_list, int);
	}

	va_end(arg_list);
	return (sum);
}
