#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: is a character
 * @s2: is a char
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, m;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = m = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[m] != '\0')
		m++;
	str = malloc(sizeof(char) * (i + m + 1));
	if (str == NULL)
		return (NULL);
	i = m = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[m] != '\0')
	{
		str[i] = s2[m];
		i++, m++;
	}
	str[i] = '\0';
	return (str);
}
