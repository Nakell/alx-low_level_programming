#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 * Return: 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 0; x <= 8; x++)
	{
		int y;

		for (y = x + 1; y <= 9; y++)
		{
			putchar('0' + x);
			putchar('0' + y);

			if (x != 8 || y != 9)
			{
			putchar(',');
			putchar(' ');
			}
			if (y == 9)
				break;
		}
	}
	putchar('\n');
	return (0);
}
