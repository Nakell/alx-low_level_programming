#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: checks string
 * Return: 0
 */
void puts2(char *str)
{
	int string = 0;

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string += 2;
	}
	_putchar('\n');
}
