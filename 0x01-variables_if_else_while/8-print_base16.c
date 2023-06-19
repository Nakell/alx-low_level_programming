#include <stdio.h>
/**
 * main - program that prints all numbers of base 16
 * Return: 0 (Success)
*/
int main(void)
{
	char ch;

	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
