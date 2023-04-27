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
}
/**
 * close_the_file - close file
 * @ptrfile: is a file
 */

void close_the_file(int ptrfile)
{
	int m;

	m = close(ptrfile);

	if (m == -1)
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	temp_buf = create_new_buf(argv[2]);
	k = open(argv[1], O_RDONLY);
	rd = read(k, temp_buf, 1024);

	m = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (k == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(temp_buf);
			exit(98);
}
wrte = write(m, temp_buf, rd);
if (m == -1 || wrte == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	free(temp_buf);
	exit(99);
}
rd = read(k, temp_buf, 1024);
m = open(argv[2], O_WRONLY | O_APPEND);
} while (rd > 0);

free(temp_buf);
close_the_file(k);
close_the_file(m);
return (0);
}
