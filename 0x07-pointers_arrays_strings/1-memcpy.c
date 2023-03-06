#include "main.h"

/**
 * _memcpy - copies memory of area
 * @dest: is a char
 * @src: is a char
 * @n: is an integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
