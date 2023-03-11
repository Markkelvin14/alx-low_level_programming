#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum
 * @argv: array
 * @argc: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int m, sum = 0;
	char *k;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			k = argv[i];
			for (m = 0; m < strlen(k); m++)
			{
				if (k[m] < 48 || k[m] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(k);
			k++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
