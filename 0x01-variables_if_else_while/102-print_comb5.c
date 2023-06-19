#include <stdio.h>
/**
 * main - program that prints two two digit numbers
 * Return: 0 (Success)
*/
int main(void)
{
	int a;

	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1 ; b <= 9; b++)
		{
			putchar('0' + a);
			putchar('0' + b);

			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			if (b == 9)
				break;
		}
	}
	putchar('\n');
	return (0);
}
