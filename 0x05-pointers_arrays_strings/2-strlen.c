#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is the string
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
