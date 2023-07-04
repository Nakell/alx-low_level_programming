#include "main.h"

/**
 * *_memcpy - function copies memory area
 * @dest: memory area
 * @src: bytes
 * @n: copies function
 *
 * Return: a pointer ot dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
