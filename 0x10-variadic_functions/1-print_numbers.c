#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	int number = 0;

	if (separator == NULL)
		return;
	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(arg_list, int);
		printf("%d", number);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_list);
}
