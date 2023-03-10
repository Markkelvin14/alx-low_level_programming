#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int m = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; m < i ; m++)
	{
		dest[m] = src[m];
	}
	dest[i] = '\0';
	return (dest);
}
