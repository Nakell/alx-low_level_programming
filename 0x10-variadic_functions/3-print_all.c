#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passe
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *separator = "";
	va_list arg_list;

	va_start(arg_list, format);

	while (format && (format[i] != '\0'))
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", separator, va_arg(arg_list, int));
			break;
			case 'i':
			printf("%s%d", separator, va_arg(arg_list, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(arg_list, double));
			break;
			case 's':
			str = va_arg(arg_list, char *);
			if (str == NULL)
			{
				str = ("(nil)");
			}
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
