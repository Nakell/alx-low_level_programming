#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: checks the string
 * Return: If the number is odd the function should print n
 * where n = (length_of_the_string -1) /2
 */
void puts_half(char *str)
{
	int s;
	int length = 0;

	while (str[length] != '\0')
		length++;
	s = length / 2;
	if (length % 2 == 1)
		s++;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
