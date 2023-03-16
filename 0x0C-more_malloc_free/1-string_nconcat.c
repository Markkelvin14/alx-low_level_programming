#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strigs
 * @s1: is a char
 * @s2: is a char
 * @n: is an int
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, m = 0, k = 0, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		len = i + k;
	else
		len = i + n;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (m < len)
	{
		if (m <= i)
			str[m] = s1[m];
		if (m >= i)
		{
			str[m] = s2[k];
			k++;
		}
		m++;
	}
	str[m] = '\0';
	return (str);
}
