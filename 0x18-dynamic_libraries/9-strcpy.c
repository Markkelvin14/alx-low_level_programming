#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @src: is the string
 * @dest: is an input
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int m = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; m < i; m++)
	{
		dest[m] = src[m];
	}
	dest[i] = '\0';
	return (dest);
}
