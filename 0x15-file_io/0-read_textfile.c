#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a test file and prints it to the POSIX
 * @filename: is a variable pointer of a file
 * @letters: is a variable
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ptrfile;
	char *str;
	ssize_t wrte;
	ssize_t rd;

	ptrfile = open(filename, O_RDONLY);
	/**close (ptrfile);*/
	if (ptrfile == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	rd = read(ptrfile, str, letters);
	wrte = write(STDOUT_FILENO, str, rd);
	free(str);
	close(ptrfile);
	return (wrte);
}
