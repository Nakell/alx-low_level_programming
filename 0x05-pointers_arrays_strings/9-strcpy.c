#include "main.h"

/**
 * *_strcpy - functions copies the string
 * @dest: appends the string
 * @src: appends the string
 * Return: the pointer of dest
 */

char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
