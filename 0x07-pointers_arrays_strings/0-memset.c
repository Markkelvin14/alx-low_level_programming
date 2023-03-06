#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: is a char
 * @b: is a char
 * @n: is an int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
