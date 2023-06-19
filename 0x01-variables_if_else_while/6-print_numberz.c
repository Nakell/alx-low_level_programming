#include <stdio.h>
/**
 * main - prints base 10 with putchar
 * Return: 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
