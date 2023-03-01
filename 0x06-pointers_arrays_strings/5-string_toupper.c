#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: is the character
 * Return: n
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i])
	{
		if (n[i] >= 'a' && n[i] <= 'Z')
			n[i] -= 32;
		i++;
	}
	return (n);

}
