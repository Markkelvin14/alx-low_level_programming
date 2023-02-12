#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: is the string
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;
	int m = 0;
	char *j = str;
	int n;

	while (*j != '\0')
	{
		j++;
		i++;
	}
	m = i - 1;
	for (n = 0; n <= m; n++)
	{
		if (n % 2 == 0)
		{
			_putchar (str[n]);
		}
	}
	_putchar('\n');
}
