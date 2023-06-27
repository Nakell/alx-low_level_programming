#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: checks a string
 * Return: always 0
 */
void print_rev(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	while (string_length--)
		_putchar(s[string_length]);
	_putchar ('\n');
}
