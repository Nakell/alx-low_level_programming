#include "main.h"
#include <stdio.h>

/**
 * main - program prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	for (int a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
