#include "main.h"

/**
 * rev_string - resverse a string
 * @s: is the string
 * Return: 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i = 0;
	int m;

	while (s[i] != '\0')
		i++;
	for (m = 0; m < i; m++)
	{
		i--;
		rev = s[m];
		s[m] = s[i];
		s[i] = rev;
	}
}
