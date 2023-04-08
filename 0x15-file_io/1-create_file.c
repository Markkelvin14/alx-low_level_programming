#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: is a variable pointer to a file
 * @text_content: is a string
 * Return: -1
 */

int create_file(const char *filename, char *text_content)
{
	int ptrfile;
	int wrte;
	int stn = 0;

	if (filename == NULL)
		return (-1);

	ptrfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrte = write(ptrfile, text_content, stn);
	if (ptrfile == -1 || wrte == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[stn] > 0)
			stn++;
	}
	close(ptrfile);
	return (1);
}
