#include "main.h"

/**
 * get_endianness - checks for the endianness
 * Return: 0 and 1
 */

int get_endianness(void)
{
	unsigned int mak = 1;
	char *m = (char *) &mak;

	return (*m);
}
