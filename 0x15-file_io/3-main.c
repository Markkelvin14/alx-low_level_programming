#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies the contents of a file
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int k;
	int m;
	int rd;
	int wrte;
	char *temp_buf;

	if (argc != 3)
	{
		dprintf("Usage: cp file_from file_to\n", STDERR_FILENO);
		exit(97);
	}
}
