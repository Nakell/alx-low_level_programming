#include "main.h"
#include <string.h>

/**
 * rev_string - reverse array
 * @n: integer
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = strlen(n) - 1;
	char temp;

	while (i < j)
	{
		temp = n[i];
		n[i] = n[j];
		n[j] = temp;
		i++;
		j--;
	}
}

/**
 * infinite_add - add two numbers
 * @n1: value
 * @n2: value
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, num = 0;
	int value1 = 0, value2 = 0, temp_tot = 0;

	while(*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 +i) - '0';
		if (j < 0)
			value2 = *(n2 + j) - '0';
		temp_tot = value1 + value2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (temp_tot % 10) + '0';
		num++;
		j--;
		i--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
