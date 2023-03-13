#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: is a character
 * Return: pointer to a new string
 */

char *_strdup(char *str)
{
	char *s;
	int m, i = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;
	s = malloc(sizeof(char) * (m + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	return (s);
}
