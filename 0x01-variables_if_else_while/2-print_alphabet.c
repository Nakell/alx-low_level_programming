#include <stdio.h>
/**
 * main - entry point
 * description - program that prints the alphabets in lowecase
 * Return: 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
