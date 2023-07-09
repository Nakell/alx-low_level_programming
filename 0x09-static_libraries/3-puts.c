#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: checks the string
 * Return: string and new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
