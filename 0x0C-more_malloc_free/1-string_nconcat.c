#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: Null if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int y = 0, length1 = 0, length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	if (n >= length2)
		n = length2;
	string = malloc(sizeof(char) * n + length1 + 1);
	{
		if (string == NULL)
			return (NULL);
	}
	for (y = 0; y < length1; y++)
		string[y] = s1[y];
	for (y = 0; y < n; y++)
		string[y + length1] = s2[y];
	string[y + length1] = '\0';
	return (string);
}

