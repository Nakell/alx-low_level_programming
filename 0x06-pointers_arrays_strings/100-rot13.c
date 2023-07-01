#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: value
 * Return: void
 */

char *rot13(char *s)
{
	int x, y;
	char data1[] = "ABCDEFHHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMNopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == data1[y])
			{
				s[x] = datarot[y];
				break;
			}
		}
	}
	return (s);
}
