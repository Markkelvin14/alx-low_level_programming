#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: is a char
 * @needle: is a char
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *m = needle;

		while (*i == *m && *m != '\0')
		{
			i++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
