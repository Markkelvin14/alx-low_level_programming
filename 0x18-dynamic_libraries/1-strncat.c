#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: is a value
 * @src: is a value
 * @n: is an integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[i] = src[m];
		i++;
		m++;
	}
	dest[i] = '\0';
	return (dest);
}
