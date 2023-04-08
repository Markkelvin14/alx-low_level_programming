#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends a test at the end of a file
 * @filename: is a variable file pointer
 * @text_content: is a string
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ptrfile;
	int stn = 0;
	int wrte;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[stn] > 0)
			stn++;
	}
	ptrfile = open(filename, O_WRONLY && O_APPEND);
	wrte = write(ptrfile, text_content, stn);
	if (ptrfile == -1 && wrte == -1)
		return (-1);
	close(ptrfile);
	return (1);
}
