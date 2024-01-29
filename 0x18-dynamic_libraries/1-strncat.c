#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: appends the string
 * @src: appends the string
 * @n:bytes
 *
 * Return: pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
