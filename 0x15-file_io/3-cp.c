#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_new_buf - creates a temproray buffer
 * @filename: is the name of ihe file
 * Return: buf
 */
char *create_new_buf(char *filename)
{
	char *temp_buf;

	temp_buf = malloc(sizeof(char) * 1024);
	if (temp_buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (temp_buf);
	free(temp_buf);
}
/**
 * close_the_file - close file
 * @ptrfile: is a file
 */

void close_the_file(int ptrfile)
{
	/**int m;*/

	if (close(ptrfile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", ptrfile);
		exit(100);
	}
}

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
