#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arg
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
