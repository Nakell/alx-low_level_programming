#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: checks string
 * Return: print
 */
void puts2(char *str)
{
	char *x = str;
	int p = 0;
	int longs = 0;
	int y;

	while (*x != '\0')
	{
		x++;
		longs++;
	}
	p = longs - 1;
	for (y = 0; y <= p; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
