#include <stdio.h>
/**
 * main - program prints number seprarated by commas in ascending order
 * Return: 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

