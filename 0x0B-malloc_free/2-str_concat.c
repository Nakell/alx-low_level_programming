#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int y = 0, x = 0, length1 = 0, length2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[y])
		y++;
	while (s2[x])
		x++;
	length2 = y + x;
	s = malloc((sizeof(char) * length2) + 1);

	if (s == NULL)
		return (NULL);
	x = 0;

	while (length1 < length2)
	{
		if (length1 <= y)
			s[length1] = s1[length1];
		if (length1 >= y)
		{
			s[length1] = s2[x];
			x++;
		}
		length1++;
	}
	s[length1] = '\0';
	return (s);
}
