#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the last digit of the number stored in a variable
 * Return: 0 (Sucess)
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		l = (n % 10) * -1;
		n *= -1;
	}
	else
	{
		l = n % 10;
	}
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
