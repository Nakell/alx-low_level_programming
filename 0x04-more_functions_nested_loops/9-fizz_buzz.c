#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers from 1-100
 * for mutliples of 3 print Fizz,for 5 print Buzz, for both print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
