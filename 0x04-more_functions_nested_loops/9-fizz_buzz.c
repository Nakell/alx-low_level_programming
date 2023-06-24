#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints the numbers from 1-100
 * but for mutliples of 3 print Fizz,for 5 print Buzz, for both print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else
			printf("%x", x);
		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
