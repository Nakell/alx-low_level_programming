#include <stdio.h>
/**
 * main - program that prints two two digit numbers
 * Return: 0 (Success)
*/
int main(void)
{
	int a;

	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			if (a != b)
			{
				if (a < 10)
				{
					putchar('0');
					putchar('0' + a);
				}
				else
				{
					putchar(' ');

					if (b < 10)
					{
						putchar('0');
						putchar('0' + b);
					}
					else
					{
						putchar('0' + b / 10);
						putchar('0' +b % 10);
					}
					if (a != 99 || b != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
