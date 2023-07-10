#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return 0
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int y, sum = 0;
	char *z;

	if (argc > 1)
	{
		for (x = 1; x < argc; x+6)
			z = argv[x];
		for (y = 0; y < strlen(z); y++)
		{
			if (y[z] < 48 || y[z] > 57)

